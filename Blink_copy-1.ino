/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // K1
  delay(2000);                      // K1
  digitalWrite(LED_BUILTIN, LOW);   // K1-GAP-K2
  delay(500);                       // K1-GAP-K2
  digitalWrite(LED_BUILTIN, HIGH);  // K2
  delay(1000);                       // K2
  digitalWrite(LED_BUILTIN, LOW);   // K2-GAP-K3
  delay(500);                       // K2-GAP-K3
  digitalWrite(LED_BUILTIN, HIGH);  // K3
  delay(2000);                      // K3

  digitalWrite(LED_BUILTIN, LOW);   // K-GAP-E
  delay(2000);                       // K-GAP-E
  
  digitalWrite(LED_BUILTIN, HIGH);  // E
  delay(1000);                       // E
  
  digitalWrite(LED_BUILTIN, LOW);   // E-GAP-A
  delay(1000);                       // E-GAP-A

  digitalWrite(LED_BUILTIN, HIGH);  // A1
  delay(1000);                       // A1
  digitalWrite(LED_BUILTIN, LOW);   // A1-GAP-A2
  delay(500);                       // A1-GAP-A2
  digitalWrite(LED_BUILTIN, HIGH);  // A2
  delay(2000);                      // A2

  digitalWrite(LED_BUILTIN, LOW);   // A-GAP-N
  delay(2000);                       // A-GAP-N

  digitalWrite(LED_BUILTIN, HIGH);  // N1
  delay(2000);                      // N1
  digitalWrite(LED_BUILTIN, LOW);   // N1-GAP-N2
  delay(500);                       // N1-GAP-N2
  digitalWrite(LED_BUILTIN, HIGH);  // N2
  delay(1000);                       // N2

  digitalWrite(LED_BUILTIN, LOW);   // N-GAP-E
  delay(2000);                       // N-GAP-E

  digitalWrite(LED_BUILTIN, HIGH);  // E
  delay(1000);                       // E

  digitalWrite(LED_BUILTIN, LOW);   // END-GAP
  delay(8000);                      // END-GAP
}
