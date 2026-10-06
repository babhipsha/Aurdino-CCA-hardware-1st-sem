#include<Servo.h>

#define ECHO 6
#define TRIG 5
#define servoPin 9

Servo apple;

long distanceInCm;

void setup() {
  // put your setup code here, to run once:
apple.attach(servoPin);

pinMode(ECHO, INPUT);
pinMode(TRIG, OUTPUT);
Serial.begin(9600);
}

void loop() {
distanceInCm = distanceCm(ECHO, TRIG);
Serial.print("distance in m : ");
Serial.println(distanceInCm);
if(distanceInCm<20){
  apple.write(90);
  delay(150);
  } else{
      apple.write(0);
  delay(150);
  }
}

long distanceCm(int echo, int trig){
long duration, distance;
digitalWrite(trig, LOW);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
duration = pulseIn(echo, HIGH);
distance = 0.0342 * duration /2; //centimeter/microsecond ma lekheko ho
return distance;
}