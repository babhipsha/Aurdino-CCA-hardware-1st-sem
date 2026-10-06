#define ECHO 6
#define TRIG 5

long distance, duration;


void setup() {
  // put your setup code here, to run once:
pinMode(ECHO, OUTPUT);
pinMode(TRIG, INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ECHO, LOW);
digitalWrite(ECHO, HIGH);
delayMicroseconds(10);
digitalWrite(ECHO, LOW);
duration = pulseIn(TRIG, HIGH);
distance = 0.0342 * duration /2; //centimeter/microsecond ma lekheko ho
Serial.print("distance : ");
Serial.println(distance);
delay(100);
}
