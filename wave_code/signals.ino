
#include "config.h"
AdafruitIO_Feed *feed = io.feed("new-email");

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
  pinMode(14,OUTPUT);
  digitalWrite(14, LOW);
}

void loop() {
  io.run();
}

void handleMessage(AdafruitIO_Data *data) {
  Serial.println("New email");
  digitalWrite(14, HIGH);
  delay(5000);
  digitalWrite(14, LOW);
}
