#define motA1 6
#define motA2 7
#define motB1 8
#define motB2 9

void setup() {
pinMode(motA1, OUTPUT);
pinMode(motB1, OUTPUT);
pinMode(motA2, OUTPUT);
pinMode(motB2, OUTPUT);
}

void loop(){
forward();
delay(2000);
backward();
delay(2000);
leftTurn();
delay(2000);
rightTurn();
delay(2000);
stops();
delay(1000);
}

void forward() {
digitalWrite(motA1, HIGH);
digitalWrite(motA2, LOW);
digitalWrite(motB1, HIGH);
digitalWrite(motB2, LOW);
delay(100);
}

void backward(){
digitalWrite(motA1, LOW);
digitalWrite(motA2, HIGH);
digitalWrite(motB1, LOW);
digitalWrite(motB2, HIGH);
delay(100);
}

void leftTurn(){
digitalWrite(motA1, LOW);
digitalWrite(motA2, HIGH);
digitalWrite(motB1, HIGH);
digitalWrite(motB2, LOW);
delay(100);
}

void rightTurn(){
digitalWrite(motA1, HIGH);
digitalWrite(motA2, LOW);
digitalWrite(motB1, LOW);
digitalWrite(motB2, HIGH);
delay(100);
}

void stops(){
digitalWrite(motA1, LOW);
digitalWrite(motA2, LOW);
digitalWrite(motB1, LOW);
digitalWrite(motB2, LOW);

}