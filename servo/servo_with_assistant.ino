int led = 11;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  char c = Serial.read();
  if(c=='l')
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  else if(c=='o')               // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
}
