#include <Servo.h>
#include "config.h"

AdafruitIO_Feed *feed = io.feed("");//FILL IN
#define SERVO_PIN 14
Servo servo;

void setup() {
  Serial.begin(115200);
  while (! Serial);
  feed->onMessage(handleMessage);
  io.connect();
  Serial.print("Connecting to Adafruit IO");
  while (io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(1000);
  }
  Serial.println(io.statusText());

  feed->get();
  servo.attach(SERVO_PIN);
  servo.write();//FILL IN
}

void loop() {
  io.run();
}

void handleMessage(AdafruitIO_Data *data) {
    Serial.println("New line");
}
