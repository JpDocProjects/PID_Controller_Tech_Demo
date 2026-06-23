# PID_Controller_Tech_Demo

- Ball & Beam–style Arduino project that uses a PID control system to regulate
the position of an object along a straight line. The main components of the
build are an ultrasonic sensor, a metal gear servo, and a set of joints in a
LEGO-based support structure.

# Detailed order of operations

- The ultrasonic sensor measures the object’s distance relative to a reference point, which
is defined using a potentiometer. This error signal is then processed by a PID controller,
which calculates the new angle for the micro servo in order to reduce the error and move the
object toward the target position.

![PID Demo](images/Example_2_GIF.gif)

# PID Controller

- The final PID output (angle) is calculated as:
 base value + (P value) + (I value) + (D value)

P value = (error offset * P constant)

I value = (integral * I constant)
 Where integral is the accumulus per cycle of (error * dt)

D value = ((error - previous_error) / dt) * D constant

- When added, these values give the final servo desired position. The constants need to be
tweaked until desired results.

# Materials used

- Arduino UNO
- LEGO
- Toy car
- Metal-gared microservo
- Cardboard
- Potentiometer
- Ultrasonic sensor

