#include "control/lqr.h"

// u = -K (x - ref), K from design/lqr_design.py
static const float K[4] = {0, 0, 0, 0};

float lqrControl(const State& x, const State& ref) {
  float u = -(K[0] * (x.pos - ref.pos) +
              K[1] * (x.vel - ref.vel) +
              K[2] * (x.theta - ref.theta) +
              K[3] * (x.omega - ref.omega));
  return constrain(u, -1.0f, 1.0f);
}
