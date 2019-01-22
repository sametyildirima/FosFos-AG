// FOSFOS AG Arduino POT-PWM Code
int potentiometerPin = A6; 
void setup() {
  Serial.begin(9600);
TCCR0B = TCCR0B & 0b11111000 | 0x02; //For 7.8 KHZ
}
void loop() {
  int potValue = analogRead(potentiometerPin);
  int fadeValue = map(potValue, 0, 1023, 0, 187); //for %72 Duty Cycle
Serial.println(potValue);
analogWrite(6, fadeValue);
delay (10);
}
