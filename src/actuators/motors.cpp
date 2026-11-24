#include "actuators/motors.h"
#include "common/config.h"
#include <Arduino.h>

void motorsInit() {
}

void motorsSet(float left, float right) {
}

void motorsStop() {
  motorsSet(0, 0);
}
