# PID_Controller_Tech_Demo
A Ball & Beam–style Arduino project that uses a PID control system to regulate the position of an object along a straight line. The main components are an ultrasonic sensor, a metal gear servo, and a LEGO-based support structure.

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

## Materials Used
- Arduino UNO
- LEGO
- Toy car
- Metal-gear micro servo
- Cardboard
- Potentiometer
- Ultrasonic sensor

## Programs used

- Arduino IDE
