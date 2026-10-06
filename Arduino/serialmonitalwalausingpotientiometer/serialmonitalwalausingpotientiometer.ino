void setup() {
 pinMode(11,OUTPUT); 
pinMode(A0, INPUT);
Serial.begin(9600);

}

void loop() {
int analogVal = analogRead(A0);
int pwmVal = constrain(analogVal, 700, 1023);
pwmVal = map(pwmVal, 700, 1023, 100, 0);
//analogWrite(11, pwmVal);
Serial.println(pwmVal);
delay(10);


}
