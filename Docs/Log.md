08/06/26 
- I need to improve my PID controller logic and mechanical assembly capabilities, so I will try to design
a project that helps me improve in both aspects.I think that it need to have a simple goal, in order to help
me calibrate the PID values without complication, and evaluate the outcomes.

09/06/26
- Had some ideas and searched for inspirations on the internet. The final idea is to control a ball's position
relative to an ultrassonic sensor. Using a PID control system, a servo will adjust the angle of the platform's
inclination based on the current ball position. It should look something like this (sketch): 
<img width="398" height="241" alt="Sketch 1" src="https://github.com/user-attachments/assets/81500629-0d7c-4e49-9103-2b99bd563f46" />

- Built support for the sensor and the rail, but I couldnt find anything to hold a ball, will change to car track
and hotwheels car with a flat cardboard surface on top of it, so that the sensor can detect it easier.
- I think that the miniservo isnt going to support the weight, thinking about ways to reduce it.

10/06/26
- Finished the build, but miniservo cant handle the weight, so I will need to reduce the weight and try again
- Reduced the weight and the servo still cant work properly, I will need either two miniservos, or use a stronger
step motor (dont know how that would work).
- Added another miniservo in the same axis, but they are acting weird and cant mantain 100% alignment.
- Decided that I will try to make the sensor work first, but this seems to bring some problems with the
servo library, so I will try that later.

11/06/26
- Thought that the miniservos problem was not a big deal, so I tried fixing it by improving the support for the
servos and adding a platform connecting their bases. It worked.
- The problem for the sensor suddently dissapeared too, it is detecting the proper distance, so I only need to assemble
everything and put the cardboard on top of the car for easy detection.
- Everything is ready, the distance is being detected, and the servos are responding accordingly, now, only the code
needs to be tweaked. I will try to implement a PD first, as I am already familiar with the system. The I part will come
later, I dont know how to implement it very well.

16/06/26
-The servos were a BIG problem. After trying to implement the basic system, I realised that the old setup with duct tape
and plastic gear microservos was not going to work. It is hard to stabilize them using duct tape, and it is worse to maintain
the two working in the same exact axis. So I bought a metal geared microservo.
-To fix the lego-servo connection, I tried using hot glue, and it worked, now I am 100% sure that the structure is not a problem.
-Got started with testing the proportional controller. In my setup, the Kp represents the variation of angle per centimeter of error,
as in Angle = 100 (base stable angle) + Kp * error. 2.5 was too small, 6 too big, and 4.5 is the current value.
-Added averaging distance signals, because the sensor is a little bit clanky.
-Coded the Derivative controller: (previous error - current error) tells the system if the error is increasing or decreasing. Multiply
that by a fixed value (Kd), and then add the result to the final angle.
-I think that the integral controller is going to help the system a lot, because the final error stops in the -1 to 1 range, the integral
controller fixes the problem. I dont have any ideia on how I can start to code the integral controller (I think that it is a little bit harder).
Going to search how to do that.
