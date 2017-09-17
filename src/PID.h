#ifndef PID_H
#define PID_H

class PID {
  double kp;
  double ki;
  double kd;

  double p_error;
  double i_error;
  double d_error;

public:
  PID(double kp, double ki, double kd):
    kp(kp), ki(ki), kd(kd), p_error(0.0), i_error(0.0), d_error(0.0){};

  virtual ~PID(){}
  void UpdateError(double cte);
  double TotalError();
};

#endif /* PID_H */
