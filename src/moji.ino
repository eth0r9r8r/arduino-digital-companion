#include "faces.h"

extern Adafruit_SSD1306 display;

void setup()
{
  Serial.begin(9600);
  
  // initialize the OLED object
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Clear the buffer.
  display.clearDisplay();
}

void loop()
{
  srand(567);
  int pick;

  while(1)
  {
    pick = rand() % 100 + 1;

    if(pick > 90) crazy();
    else if(pick > 50) coinflip(rand() % 2);
    else old_tired();    
  }
}
