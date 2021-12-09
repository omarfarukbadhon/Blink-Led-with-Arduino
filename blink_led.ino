#define pin 13

// the setup function runs once when you press reset or power the board
void setup() {

  pinMode(pin , OUTPUT);    // initialize digital pin LED_BUILTIN as an output.

}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(pin , HIGH);   // turn the LED on (HIGH is the voltage level)

  delay(1000);                // wait for a second

  digitalWrite(pin , LOW);    // turn the LED off by making the voltage LOW

  delay(1000);               // wait for a second
}
