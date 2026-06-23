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

