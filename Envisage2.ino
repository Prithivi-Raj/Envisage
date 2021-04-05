#include <Adafruit_NeoPixel.h>
// Which pin on the Arduino is connected to the NeoPixels?
#define PIN 4 // On Trinket or Gemma, suggest changing this to 1
#define PIN2 3 // On Trinket or Gemma, suggest changing this to 1
// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 15 // Popular NeoPixel ring size
// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
int NUMBER9[]={1,1,1,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,1,1,1,1,1,1,1};
int NUMBER8[]={0,1,1,0,1,1,1,0, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0};
int NUMBER7[]={1,0,0,0,0,0,0,0, 1,0,0,0,1,0,0,0, 1,0,0,0,1,0,0,0, 1,0,0,1,1,1,1,1, 1,1,1,0,1,0,0,0};
int NUMBER6[]={1,1,1,1,1,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,1};
int NUMBER5[]={1,1,1,1,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,1};
int NUMBER2[]= {1,0,0,0,0,0,1,1, 1,0,0,0,0,1,0,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,0,0,0,1};
int NUMBER1[]= {0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};
int NUMBER0[]= {1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,1};
int _[] = {0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};
int A[] = {1,1,1,1,1,1, 1,0,0,1,0,0, 1,1,1,1,1,1};
int B[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0};
int C[] = {0,0,1,1,1,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1};
int D[] = {1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,0,0,0,0,1,0, 0,0,1,1,1,1,0,0};
int E[] = {1,1,1,1,1,1, 1,0,0,1,0,1, 1,0,0,1,0,1};
int F[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0};
int G[] = {0,1,1,1,1,0, 1,0,0,1,0,1, 1,0,0,1,1,1};
int H[] = {1,1,1,1,1,1,1,1, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 1,1,1,1,1,1,1,1};
int I[] = {1,0,0,0,0,1, 1,1,1,1,1,1, 1,0,0,0,0,1};
int J[] = {0,0,0,0,0,1,1,0, 0,0,0,0,1,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0};
int K[] = {1,1,1,1,1,1,1,1, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1};
int L[] = {1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1};
int M[] = {1,1,1,1,1,1,1,1, 0,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1};
int N[] = {1,1,1,1,1,1, 0,1,1,1,1,0, 1,1,1,1,1,1};
int O[] = {0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,1,1,1,1,1,0};
int P[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 0,1,1,0,0,0,0,0};
int Q[] = {0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,1,0,1, 0,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1};
int R[] = {1,1,1,1,1,1,1,1, 1,0,0,1,1,0,0,0, 1,0,0,1,0,1,0,0, 1,0,0,1,0,0,1,0, 0,1,1,0,0,0,0,1};
int S[] = {0,1,1,0,0,1, 1,0,0,1,0,1, 1,0,0,1,1,1};
int T[] = {1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0};
int U[] = {1,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0};
int V[] = {1,1,1,1,1,0, 0,0,0,0,0,1, 1,1,1,1,1,0};
int W[] = {1,1,1,1,1,1,1,1, 0,0,0,0,0,0,1,0, 0,0,0,0,0,1,0,0, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,1,1};
int X[] = {1,1,0,0,0,0,1,1, 0,0,1,0,0,1,0,0, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 1,1,0,0,0,0,1,1};
int Y[] = {1,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,0,0,1,1,1,1,1, 0,0,1,0,0,0,0,0, 1,1,0,0,0,0,0,0};
int Z[] = {1,0,0,0,0,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 1,0,1,0,0,0,0,1, 1,1,0,0,0,0,0,1};
int* alpha[]= {A,B,C,D,E,F,G,H,I,J,K,L,M,N};//,T,U,V,W,X,Y,Z};
int letterSpace;
int delayTime;
#define IR_pin 2
void setup()
{
 Serial.begin(9600);
 pinMode(IR_pin,INPUT);
 pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)


 letterSpace =1;// defining the space between the letters (ms)
 delayTime =0.3;// defining the time dots appear (ms)

}
void printLetter(int letter[])
{
 int y;
 // printing the first y row of the letter
 for (y=0; y<8; y++)
 {
 pixels.setPixelColor(y+2, pixels.Color(0, 150*letter[y], 0));
 pixels.show(); // Send the updated pixel colors to the hardware.
 }
 delay(delayTime);
 // printing the second y row of the letter
 for (y=0; y<8; y++)
 {
 // digitalWrite(y+2, letter[y+8]);
 pixels.setPixelColor(y+2, pixels.Color(0, 150*letter[y+8], 0));
 pixels.show(); // Send the updated pixel colors to the hardware.
 }
 delay(delayTime);
 // printing the third y row of the letter
 for (y=0; y<8; y++)
 {
 //digitalWrite(y+2, letter[y+16]);
 pixels.setPixelColor(y+2, pixels.Color(0, 150*letter[y+16], 0));
 pixels.show(); // Send the updated pixel colors to the hardware.
 }
 delay(delayTime);
 for(y = 0; y<8; y++) {
 // digitalWrite(y+2, letter[y+24]);
 pixels.setPixelColor(y+2, pixels.Color(0, 150*letter[y+24], 0));
 pixels.show(); // Send the updated pixel colors to the hardware.
 }
 delay(delayTime);
 for(y = 0; y<8; y++) {
 // digitalWrite(y+2, letter[y+32]);
 pixels.setPixelColor(y+2, pixels.Color(0, 150*letter[y+32], 0));
 pixels.show(); // Send the updated pixel colors to the hardware.
 }
 delay(delayTime);
 // printing the space between the letters
 for (y=0; y<8; y++)
 {
 // digitalWrite(y+2, 0);
 pixels.setPixelColor(y+2, pixels.Color(0, 0, 0));
 pixels.show(); // Send the updated pixel colors to the hardware.
 }
 delay(letterSpace);
}
void loop()
{
 int reading = digitalRead(IR_pin);
Serial.print(reading);
 if(digitalRead(IR_pin)==LOW)
 {
 pixels.clear(); // Set all pixel colors to 'off'
 printLetter (E);
 printLetter (N);
 printLetter (V);
// printLetter (_);
// printLetter (_);
 printLetter (I);
 printLetter (S);
 printLetter (A);
 printLetter (G);
 printLetter (E);
 // printLetter (A);
 // printLetter (Y);
 printLetter (_);
 }
}
