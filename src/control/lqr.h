#pragma once
#include "common/state.h"

float lqrControl(const State& x, const State& ref);  // returns motor command -1 to 1
