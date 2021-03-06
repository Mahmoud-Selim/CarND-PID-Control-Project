# **Path Planning**


**PID Control Project**

The goals / steps of this project are the following:
* Make a PID Controller. 
* Use the PID controller to control a car around a track.
* Test the the car in the simulator.
* Summarize the results with in a written report.



## Rubric Points
### Here I will consider the [rubric points](https://review.udacity.com/#!/rubrics/1972/view) individually and describe how I addressed each point in my implementation.  

---
### Compilation

#### 1. Your code should compile.
My project includes the following files:
* main.cpp file which includes the code for generating the steering angle using the PID, and the code required for the interfacing with the simulator
* PID.h a header file for the PID controller.
* PID.cpp, the .cpp file for the PID controller.
* A writeup file addressing how the project was implemented.

* The project compiles successfully and no errors happen.

### Implementation.
#### 2. The PID procedure follows what was taught in the lessons.	
Yes, The PID algorithm is the same algorithm taught in the lectures. I just applied a moving average function to the error to smoothen it, and i passed that error through a tanh function to limit the 
steering between [-1, 1]

#### 3. Describe how the final hyperparameters were chosen.
The hyperparameters were tuned manually by observing the car's behaviour.

#### 4. Describe the effects of the P, I, and D components of the PID controller.
For a digital system, the proportional component decreases the error and drives the system towards minimizing the error between the desired set point and the measured process value -the current state-, but it causes oscillations in a digital system, and that's why we add the derevative component. The D component of the controller dampens the system behaviour and thus reduces oscillations and improves stability. We Also add the Integral component -That is the I component- to eleminate any system bias that could have been introduced to our system, Thus the PID (Proportional, Integral and Derevative) controller.


### Simulation
The model consists of three modules:

#### 1. The vehicle must successfully drive a lap around the track.
The vehivle successfully completed more than one round around the track without getting out. It was tested on a linux environment.


### Finally, Here are some screen shots of the car around the track.

![alt text](https://github.com/Mahmoud-Selim/CarND-PID-Control-Project/blob/master/Screenshots/1.png)

![alt text](https://github.com/Mahmoud-Selim/CarND-PID-Control-Project/blob/master/Screenshots/2.png)

![alt text](https://github.com/Mahmoud-Selim/CarND-PID-Control-Project/blob/master/Screenshots/3.png)

![alt text](https://github.com/Mahmoud-Selim/CarND-PID-Control-Project/blob/master/Screenshots/4.png)
