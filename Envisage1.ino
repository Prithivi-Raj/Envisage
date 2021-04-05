/*
* This Code demonstrates
* LED POV DISPLAY
*/
#include <Adafruit_NeoPixel.h>
// Which pin on the Arduino is connected to the NeoPixels?
#define PIN 4 // On Trinket or Gemma, suggest changing this to 1
#define PIN2 3 // On Trinket or Gemma, suggest changing this to 1
// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 30 // Popular NeoPixel ring size
// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
#define IR_pin 2
void setup()
{
 Serial.begin(9600);
 pinMode(IR_pin,INPUT);
 pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
 pixels2.begin();


 letterSpace =0;// defining the space between the letters (ms)
 delayTime =0.541;// defining the time dots appear (ms)

}
void loop()
{
for (int y=0; y<30; y++)
 {
 // digitalWrite(y+2, 0);
 pixels.setPixelColor(y, pixels.Color(y*10, y*20, y*30));
 pixels2.setPixelColor(y, pixels.Color(0,0,0));
 pixels.show(); // Send the updated pixel colors to the hardware.
 delay(2);
 pixels2.show();
 delay(500);
 pixels.clear();
 pixels2.clear();
 }
 for (int y=29; y>=0; y--)
 {
 // digitalWrite(y+2, 0);
 pixels.setPixelColor(y, pixels.Color(y*10, y*20, y*30));
 pixels2.setPixelColor(y, pixels.Color(0,0,0));
 pixels.show(); // Send the updated pixel colors to the hardware.
 delay(2);
 pixels2.show();
 delay(500);
 pixels.clear();
 pixels2.clear();
 }
 }
