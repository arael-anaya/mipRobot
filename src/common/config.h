#pragma once

// Pins
constexpr int PIN_MOTOR_L_PWM = 0;
constexpr int PIN_MOTOR_L_DIR = 0;
constexpr int PIN_MOTOR_R_PWM = 0;
constexpr int PIN_MOTOR_R_DIR = 0;
constexpr int PIN_ENC_L_A = 0;
constexpr int PIN_ENC_L_B = 0;
constexpr int PIN_ENC_R_A = 0;
constexpr int PIN_ENC_R_B = 0;

// Control
constexpr float LOOP_HZ = 200.0f;
constexpr float DT = 1.0f / LOOP_HZ;

// Robot
constexpr float WHEEL_RADIUS = 0.0f;   // m
constexpr float TICKS_PER_REV = 0.0f;
constexpr float MAX_TILT = 0.5f;       // rad, cut motors beyond this
