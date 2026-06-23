# PID_Controller_Tech_Demo

A Ball & Beam–style Arduino project that uses a PID control system to regulate the position of an object along a straight line.  

The main components of the build are an ultrasonic sensor, a metal gear servo, and a LEGO-based mechanical support structure.

![Black Background](images/black_background(edited).png)

---

# Overview

This project demonstrates a closed-loop control system using a PID controller to stabilize and position an object in real time.

---

# System Operation

The ultrasonic sensor measures the object’s distance relative to a reference point defined by a potentiometer.  

This measurement is compared to the target position, producing an error signal. The PID controller processes this error and calculates the correction needed to adjust the servo angle, reducing the error and guiding the object toward the desired position.

![PID Demo](images/Example_2_GIF.gif)

---

# PID Controller

The final control output (servo angle) is calculated as:
