void setup() {
pinMode(A0, INPUT);
Serial.begin(9600);

}

void loop() {
int analogVal = analogRead(A0);
int pwmVal = anlogVal/1023.0*255;
Serial.println(analogVal);
delay(10);


}
