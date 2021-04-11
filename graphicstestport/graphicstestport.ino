
#include "Adafruit_GFX.h"    // Core graphics library
#include "Adafruit_ST7735.h" // Hardware-specific library for ST7735

#include "SPI.h"

#if defined(ARDUINO_FEATHER_ESP32) // Feather Huzzah32
  #define TFT_CS         14
  #define TFT_RST        15
  #define TFT_DC         32

#elif defined(ESP8266)
  #define TFT_CS         4
  #define TFT_RST        16                                            
  #define TFT_DC         5

#else
  // For the breakout board, you can use any 2 or 3 pins.
  // These pins will also work for the 1.8" TFT shield.
  #define TFT_CS        10
  #define TFT_RST        9 // Or set to -1 and connect to Arduino RESET pin
  #define TFT_DC         8
#endif

// For 1.44" and 1.8" TFT with ST7735 use:
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);





float p = 3.1415926;

void setup(void) {
 // Serial.begin(9600);
  //Serial.print(F("Hello! ST77xx TFT Test"));

  // Use this initializer if using a 1.8" TFT screen:
  tft.initR(INITR_BLACKTAB);      // Init ST7735S chip, black tab



tft.drawPixel(10, 10, ST77XX_BLACK);
tft.drawPixel(10, 11, ST77XX_BLACK);
tft.drawPixel(10, 12, ST77XX_BLACK);
tft.drawPixel(10, 13, ST77XX_BLACK);
tft.drawPixel(10, 14, ST77XX_BLACK);
tft.drawPixel(10, 15, ST77XX_BLACK);
tft.drawPixel(11, 10, ST77XX_BLACK);
tft.drawPixel(12, 10, ST77XX_BLACK);
tft.drawPixel(13, 10, ST77XX_BLACK);
tft.drawPixel(14, 10, ST77XX_BLACK);
tft.drawPixel(15, 10, ST77XX_BLACK);

}

void loop() {
  tft.drawPixel(tft.width()/2, tft.height()/2, ST77XX_GREEN);
  delay(500);

  tft.drawPixel(tft.width()/2, tft.height()/2, ST77XX_BLACK);
  delay(500);
  
}
