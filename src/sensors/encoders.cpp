#include "sensors/encoders.h"
#include "common/config.h"
#include <Arduino.h>

static float pos = 0;
static float vel = 0;

void encodersInit() {
}

void encodersUpdate() {
}

float encoderPos() { return pos; }
float encoderVel() { return vel; }
