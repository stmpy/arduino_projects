int del=50; // sets a default delay time
int top = 12;
int bottom = 3;
int state = HIGH;
void setup() {
  // initialize the digital pins as outputs:
  for (int i = bottom; i<=top ; i++) {
    pinMode(i, OUTPUT);
  } // end of for loop
}
 
void loop() {
  
  // all of them blink
  for (int i = bottom; i <=top; i++) {
    digitalWrite(i, state);
  }
  delay(del);
  state = !state;
}

