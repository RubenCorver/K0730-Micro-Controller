int currentLED = 13;

int delayValue = 200;

 

void setup() {

  pinMode(2, INPUT);  
  pinMode(5, INPUT);

  pinMode(13, OUTPUT);   

  pinMode(12, OUTPUT);   

  pinMode(11, OUTPUT);   

  pinMode(10, OUTPUT);   

  pinMode(9, OUTPUT); 
}

 

int checkInput() { 

  if (digitalRead(2) == 0) {

     return 1;

  } else {

    return 0;

  }

}

 

void loop(){

  if (digitalRead(5) == 0){
    delayValue = 200;
  }

  if (digitalRead(2) == 0) {

     if (currentLED == 11) {

       digitalWrite(11, HIGH);

       delay(200);

       digitalWrite(11, LOW);

       delay(200);

       digitalWrite(11, HIGH);

       delay(200);

       digitalWrite(11, LOW);

       delay(200);

       delayValue = delayValue - 20; 

 

    } else {

       digitalWrite(currentLED, HIGH);

       delay(200);

       digitalWrite(currentLED, LOW);

       delay(200);

       digitalWrite(currentLED, HIGH);

 

       delay(200);

       digitalWrite(currentLED, LOW);

       delay(200);

    }

  }

  digitalWrite(currentLED, HIGH);

  delay(delayValue);

  digitalWrite(currentLED, LOW);

  delay(delayValue);

  currentLED = currentLED - 1;

  if (currentLED < 9) {

     currentLED = 13;

  }

}
