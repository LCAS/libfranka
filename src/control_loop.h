#pragma once

#include "control_loop_base.h"

namespace franka {

class ControlLoop : public ControlLoopBase {
 public:
  ControlLoop(RobotControl& robot, ControlCallback control_callback);
  ~ControlLoop() noexcept override;

  void operator()();
};

}  // namespace franka
