# PID_Controller_Tech_Demo
A Ball & Beam analogue Arduino project that uses a PID system to control an object's position along a straight line. The most important components are an ultrasonic sensor, a metal-geared servo, and a series of joints in a LEGO support structure.

The ultrasonic sensor measures the object's distance relative to a reference point determined by a potentiometer. This offset is sent into a PID controller, which calculates the new angle for the micro servo to reduce the offset and move the object to the desired position.

![Black Background](images/Black_Background(edited).png)

## Detailed Order of Operations
The ultrasonic sensor measures the object's distance relative to a reference point defined by a potentiometer. This error signal is processed by a PID controller, which calculates a new angle for the servo to reduce the error and move the object toward the target position.

![PID Demo](images/Example_2_GIF.gif)

## PID Controller
The final PID output (angle) is calculated as:

**base value + P value + I value + D value**

- **P value** = error × P constant
- **I value** = integral × I constant — where integral is the accumulated sum of (error × dt) per cycle
- **D value** = ((error − previous_error) / dt) × D constant

When summed, these give the final desired servo position. The constants need to be tuned until the desired behavior is achieved.

## Graph Software

- When using the Arduino IDE, the code need to be updated evey time that you want to change the PID values, so I asked Claude for an
HTML extension that lets me comunicate with the COM3 Port without needing to restart the system every time. As a bonus, the software also has
a graphing system that makes it easier for PID tuning.

## Materials Used
- Arduino UNO
- LEGO
- Toy car
- Metal-geared micro servo
- Cardboard
- Potentiometer
- Ultrasonic sensor
