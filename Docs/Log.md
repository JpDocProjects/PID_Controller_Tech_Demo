08/06/26 
- I need to improve my PID controller logic and mechanical assembly capabilities, so I will try to design
a project that helps me improve in both aspects.I think that it need to have a simple goal, in order to help
me calibrate the PID values without complication, and evaluate the outcomes.

09/06/26
- Had some ideas and searched for inspirations on the internet. The final idea is to control a ball's position
relative to an ultrassonic sensor. Using a PID control system, a servo will adjust the angle of the platform's
inclination based on the current ball position. It should look something like this (sketch): 
<img width="796" height="483" alt="Sketch 1" src="https://github.com/user-attachments/assets/81500629-0d7c-4e49-9103-2b99bd563f46" />

- Built support for the sensor and the rail, but I couldnt find anything to hold a ball, will change to car track and hotwheels car.
- I think that the miniservo isnt going to support the weight, thinking about ways to reduce it.
10/06/26
- Finished the build, but miniservo cant handle the weight, so I will need to reduce the weight and try again
- Reduced the weight and the servo still cant work properly, I will need either two miniservos, or use a stronger
step motor (dont know how that would work).
- Added another miniservo in the same axis, but they are acting weird and cant mantain 100% alignment.
- Decided that I will try to make the sensor work first, but this seems to bring some problems with the
servo library, so I will try that later.
11/06/26
- As the two miniservos didnt work, I will toy with my step motor and see if I can pull this off. I think
that the step motor is too slow/sluggish, but can handle the weight.

