# CarND-Controls-PID

The purpose of this project is to reduce cross-track error (CTE) with a PID controller. To reduce CTE, I adjust the steering angle, which is computed with three parameters, Proportional (kp), Integral (ki) and Differential (kd).

The PID parameters are tuned manually. After several rounds of trial and error, the parameters are set to : kp=_0.11_, ki=_0.0005_, kd=_5.5_. I also tuned the throttle value to _0.4_ for faster speed.   

# About PID Controller Tuning

P (proportional): the component causes the car to steer proportional to CTE. It makes the car direct to the center-line.

D (differential): the component counteracts the P component's tendency to overshoot the center line. 

I (integral): the component fix the system bias. 

The approach used for tuning is to find a kp value that direct the car to the center-line but not oscillated too much. Then kd is tuned to reduced oscillation and then ki to reduce bias error.

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 
5. To setup different kp, ki, kd values, use: `./pid kp ki kd`.
