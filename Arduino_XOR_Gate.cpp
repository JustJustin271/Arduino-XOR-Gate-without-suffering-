int buttonPin1 = 2; //1st button
int buttonPin2 = 3; //2nd button
int ledPin = 13; //Red LED pin


void setup() {
  //Defines inputs and outputs
  pinMode(buttonPin1, INPUT_PULLUP); // Prevents Arduino from going crazy and hearing a 1 or a 0 somewhere from static
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  // Declares Values
  int a = digitalRead(2);
  int b = digitalRead(3);
  
  // XOR Gate Logic without making me suffer
  int buttonStates = a ^ b;

  //Resulting function
    if (buttonStates == HIGH) {
      digitalWrite(ledPin, HIGH);
  } else {
      digitalWrite(ledPin, LOW);
  }
  delay(50); //Prevents buttons from being "jumpy"
}
//XOR Gate Completed :D
//January 11th, 2026
