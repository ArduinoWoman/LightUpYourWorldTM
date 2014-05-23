
/* The Tech Museum of Innovation  - www.thetech.org

"Light Up Your World" - May 3rd 2014
Challenge - 2 Play with Light Resistance

author: Tenaya Hurst - Arduino Woman

1 LED
1 330 ohms resistor
1 LDR Photocell
1 10K ohms resistor (or corresponding resistor to work with your LDR)
6 jumper wires


For success with this code, you must have manualTune OR autoTune commented out.
Just try one, then the other.  This is a way to make 2 codes in one!

*/


const int sensorPin = 0;  //connect your LDR to pin A0
const int ledPin = 9; //connect your LED to pin 9

int lightLevel, high = 0, low = 1023;

void setup()
{
  
  pinMode(ledPin, OUTPUT);
}

void loop()
{

  lightLevel = analogRead(sensorPin);
  
 //manualTune();  // manually change the range from light to dark
  
 autoTune();  // have the Arduino do the work for us!
  
  analogWrite(ledPin, lightLevel);
}



void manualTune()
{
  lightLevel = map(lightLevel, 0, 1023, 0, 255);  //changed 0 and 1023 to 300 and 800
  lightLevel = constrain(lightLevel, 0, 255);
} 


void autoTune()
{
  
  if (lightLevel < low)
  {
    low = lightLevel;
  }
  
  if (lightLevel > high)
  {
    high = lightLevel;
  }
  
  lightLevel = map(lightLevel, low+30, high-30, 0, 255);
  lightLevel = constrain(lightLevel, 0, 255);

}

