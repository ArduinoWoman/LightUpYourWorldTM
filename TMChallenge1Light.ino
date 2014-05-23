/* The Tech Museum of Innovation  - www.thetech.org

"Light Up Your World" - May 3rd 2014
Challenge - 1 Blink your LED

author: Tenaya Hurst - Arduino Woman

1 LED
1 330 ohms resistor
3 jumper wires

*/


void setup()
{
  pinMode(13, OUTPUT);     // plug LED wire into pin 13
}


void loop()
{

  digitalWrite(13, HIGH);   // Turn on the LED
  delay(1000);              // Wait for 1000 milliseconds, or one second  
  digitalWrite(13, LOW);    // Turn off the LED
  delay(1000);              // Wait for 1000 milliseconds, or one second
}
