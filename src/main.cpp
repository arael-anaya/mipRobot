#include <Arduino.h>
#include "common/config.h"
#include "common/state.h"
#include "sensors/imu.h"
#include "sensors/encoders.h"
#include "actuators/motors.h"
#include "sensors/tof.h"
#include "control/lqr.h"

State x;
State ref;
IntervalTimer loopTimer;
volatile bool tick = false;

void onTick() { tick = true; }

void setup() {
  Serial.begin(115200);
  imuInit();
  encodersInit();
  motorsInit();
  tofInit();
  loopTimer.begin(onTick, 1000000.0f / LOOP_HZ);
}

void loop() {
  if (!tick) return;
  tick = false;

  imuUpdate();
  encodersUpdate();
  tofUpdate();

  x.pos = encoderPos();
  x.vel = encoderVel();
  x.theta = imuTheta();
  x.omega = imuOmega();

  if (abs(x.theta) > MAX_TILT) {
    motorsStop();
    return;
  }

  float u = lqrControl(x, ref);
  motorsSet(u, u);
}
