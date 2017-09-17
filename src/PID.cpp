#include "PID.h"

void PID::UpdateError(double cte) {
  d_error = cte - p_error;
  i_error += cte;
  p_error = cte;
}

double PID::TotalError() {
  return -kp*p_error - kd*d_error - ki*i_error;
}
