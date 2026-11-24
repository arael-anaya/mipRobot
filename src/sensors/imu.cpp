#include "sensors/imu.h"
#include <Arduino.h>

static float theta = 0;
static float omega = 0;

void imuInit() {
}

void imuUpdate() {
}

float imuTheta() { return theta; }
float imuOmega() { return omega; }
