const int buzzer = 9; //buzzer to arduino pin 9

void setup(){
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
}

void loop(){
  tone(buzzer, 1000);
  delay(2000);
  noTone(buzzer);
  delay(500);
  tone(buzzer, 1000);
  delay(1000);
  noTone(buzzer);
  delay(3000);
  tone(buzzer, 1000);
  delay(1000);
  noTone(buzzer);
  delay(1000);
  tone(buzzer, 1000);
  delay(2500);
  noTone(buzzer);
  delay(1000);
  tone(buzzer, 1000);
  delay(400);
  noTone(buzzer);
  delay(500);
  tone(buzzer, 1000);
  delay(100);
  noTone(buzzer);
  delay(8000);
}
