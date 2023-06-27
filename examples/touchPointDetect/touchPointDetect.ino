#include <Wire.h>
#include <Adafruit_FT6206.h>

Adafruit_FT6206 ts = Adafruit_FT6206();

void setup() {
  Serial.begin(9600);
  Serial.println("Initializing touch screen...");

  if (!ts.begin(0x38)) {  // Address may vary depending on the module
    Serial.println("Couldn't find touch screen");
    while (1);
  }

  Serial.println("Touch screen initialized");
}

void loop() {
  if (ts.touched()) {
    TS_Point p = ts.getPoint();
    // get x and y co-ordinates of touch point
    int x = p.x;
    int y = p.y;

    Serial.print("X: ");
    Serial.print(x);
    Serial.print(" Y: ");
    Serial.println(y);

    delay(50); // Add delay to avoid multiple touch detection
  }
}
