int currentLED = 13;

int delayValue = 200;

 

void setup() {

  // initialize digital pin 12 as input;

  pinMode(2, INPUT);  
  pinMode(5, INPUT);

 

  // initialize digital pin 2 to 5 as output:

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

  // Check if the button is press at the right moment

  if (digitalRead(5) == 0){
    delayValue = 200;
  }

  if (digitalRead(2) == 0) {

     if (currentLED == 11) {

       // Blink the correct (green) LED

       digitalWrite(11, HIGH);

       delay(200);

       digitalWrite(11, LOW);

       delay(200);

       digitalWrite(11, HIGH);

       delay(200);

       digitalWrite(11, LOW);

       delay(200);

 

// Speed up the LEDs

       delayValue = delayValue - 20; 

 

    } else {

       // Blink the wrong LED

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

  // Loop LED from white –> yellow –> green –> red

  digitalWrite(currentLED, HIGH);

  delay(delayValue);

  digitalWrite(currentLED, LOW);

  delay(delayValue);

  currentLED = currentLED - 1;

  if (currentLED < 9) {

     currentLED = 13;

  }

}
