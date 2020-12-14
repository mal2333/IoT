// SERVO

// 1. Add library
//#include <Servo.h>

// 2. Define pin, and declare a servo object
//#define SERVO_PIN 14
//Servo servo;

//3. In setup()
//servo.attach(SERVO_PIN);
//servo.write();//decide on starting position

//4. In loop()
//servo.write(0);//servo moves to 0 degrees
//delay(500);//500 miliseconds
//servo.write(90);//servo moves to 90 degrees...


//  SERVO MOVES back and forth 3 times
//void handleMessage(AdafruitIO_Data *data) {
//  Serial.println("New line");
//  for(int i = 0; i<3 ; i++) {
//    servo.write(0);
//    delay(500);
//    servo.write(90);
//    delay(500);
//  }
//}

//  SERVO MOVES once
//void handleMessage(AdafruitIO_Data *data) {
//  Serial.println("New line");
//  servo.write(0);
//  delay(3000);
//  servo.write(90);
//}

//  SERVO INCREMENTS TO 180
//void setup(){
//  int tracker = 0;
//  servo.write(0);
//}
//
//void handleMessage(AdafruitIO_Data *data) {
//  Serial.println("New line");
//  while (tracker <=180 ){
//    tracker += 20;
//    servo.write(tracker);
//  }
//  tracker = 0;
//}




//  LIGHTS/neopixels

//1. Add library
//#include <Adafruit_NeoPixel.h>

//2. Define pin, number of neopixels, and declare a neopixel object
//#define LED_PIN 6
//#define LED_COUNT 60
//Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

//3. In setup()
//strip.begin();
//strip.show(); // Initializes all pixels to off

//4. In loop()
//strip.setPixelColor(number, red, green, blue);
