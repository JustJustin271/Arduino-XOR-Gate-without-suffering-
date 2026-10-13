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
  bool a = digitalRead(2) == HIGH;
  bool b = digitalRead(3) == HIGH;

  //Resulting function
  if (a^b) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  

  delay(50); //Prevents buttons from being "jumpy"
}
//XOR Gate Completed :D
//January 12th, 2026
//With help from my friend :)
