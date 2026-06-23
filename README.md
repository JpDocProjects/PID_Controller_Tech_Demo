# PID Controller Tech Demo — Ball & Beam

An Arduino-based Ball & Beam system that uses a PID control loop to regulate the position of an object along a track. The system reads position via an ultrasonic sensor, computes a correction, and drives a metal-gear servo to move the beam — all in real time.

![Project Photo](images/black_background(edited).png)

---

## How It Works

A potentiometer sets the **target position**. The ultrasonic sensor measures the object's actual position and computes the **error** (difference from target). A PID controller processes that error each cycle and outputs an updated servo angle to nudge the object toward the goal.

![Demo](images/Example_2_GIF.gif)

---

## PID Controller

The servo angle is computed as:
angle = base + P + I + D
| Term | Formula |
|------|---------|
| **P** (Proportional) | `error × Kp` |
| **I** (Integral) | `∑(error × dt) × Ki` |
| **D** (Derivative) | `((error − prev_error) / dt) × Kd` |

The constants `Kp`, `Ki`, and `Kd` must be tuned empirically for stable behavior.

---

## Materials

| Component | Notes |
|-----------|-------|
| Arduino UNO | Microcontroller |
| Ultrasonic sensor | Measures object position |
| Metal-gear micro servo | Drives beam angle |
| Potentiometer | Sets target position |
| LEGO | Structural frame & joints |
| Toy car | Object being balanced |
| Cardboard | Additional structure |

---

## Order of Operations

1. Potentiometer defines the **target position**
2. Ultrasonic sensor measures the **current position**
3. PID controller computes the **error** and derives a corrective servo angle
4. Servo adjusts the beam angle to move the object toward the target
5. Loop repeats every cycle
