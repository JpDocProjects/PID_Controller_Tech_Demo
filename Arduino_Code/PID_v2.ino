#include <Servo.h>

Servo servo;

const int trigPin = 9;
const int echoPin = 10;

float Kp = 3.5;
float Ki = 0.8;
float Kd = 0;

float integral = 0;
float prev_dist;
float prev_error;

float distBuffer[5] = {0, 0, 0, 0, 0};
int bufIndex = 0;

void setup() {
  Serial.begin(115200);

  servo.attach(6);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {

  long duration;
  float cm;

  if (Serial.available() > 0) {
    String msg = Serial.readStringUntil('\n');
    if (msg.startsWith("PID:")) {
      msg = msg.substring(4);
      int c1 = msg.indexOf(',');
      int c2 = msg.lastIndexOf(',');
      Kp = msg.substring(0, c1).toFloat();
      Ki = msg.substring(c1 + 1, c2).toFloat();
      Kd = msg.substring(c2 + 1).toFloat();
    }
  }

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distBuffer[bufIndex] = microsecondsToCentimeters(duration) - 4.0;
  bufIndex = (bufIndex + 1) % 5;

  cm = 0;
  for (int i = 0; i < 5; i++) cm += distBuffer[i];
  cm /= 5.0;

  float potval = analogRead(A0);
  int ref = static_cast<int>(potval * 15/1023);
  float error = ref - cm;

  if (error > -0.4 && error < 0.4){
    error = 0;
  }

  float dt = 0.05;
  integral += error * dt;
  integral = constrain(integral, -50, 50);

  float angle;
  angle = 95 + (error * Kp) + (integral * Ki) + (((error - prev_error)/ dt) * Kd);

  servo.write(angle);

  Serial.print(cm);
  Serial.print(" ");
  Serial.print(ref);
  Serial.print(" ");
  Serial.print(error);
  Serial.print(" ");
  Serial.println(angle);

  prev_dist = cm;
  prev_error = error;

  delay(50);
}

float microsecondsToCentimeters(long microseconds){
  return microseconds / 29.0 / 2.0;
}