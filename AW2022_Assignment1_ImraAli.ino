/*
  Blink-o-Rama
  Imra Ali
  DIGF-3010-001 Advanced Wearable Electronics
  OCAD University
  Created on 2022-02-10

  Project Title: ConfiStand
*/

#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

// Declaring Variables
int understandSwitch;
int confusedSwitch;
int helpSwitch;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  Serial.begin(9600);
  
  // Pin A0 represent understandSwitch = "I understand"
  pinMode(12, INPUT_PULLUP);

  // Pin A1 represent confusedSwitch = "I’m confused, keep explaining"
  pinMode(6, INPUT_PULLUP);

  // Pin A2 represent helpSwitch = "I need help"
  pinMode(9, INPUT_PULLUP);

}

void loop() {

  understandSwitch = digitalRead(12);
  confusedSwitch = digitalRead(6);
  helpSwitch = digitalRead(9);
  
  // If the Snap Button is connected to the "I understand" label then...
  // Rainbow Neopixel will turn ON to represent that the student understands the content
  if(understandSwitch == 0){
  CircuitPlayground.setPixelColor(0, 0xFF0000); //RED
  CircuitPlayground.setPixelColor(1, 0x9900FF); // ORANGE
  CircuitPlayground.setPixelColor(2, 0xFBFF00); // YELLOW
  CircuitPlayground.setPixelColor(3, 0x3D9C30); // GREEN
  CircuitPlayground.setPixelColor(4, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(5, 0x9900FF); // PURPLE
  CircuitPlayground.setPixelColor(6, 0xFBFF00); // YELLOW
  CircuitPlayground.setPixelColor(7, 0x3D9C30);// GREEN
  CircuitPlayground.setPixelColor(8, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(9, 0x9900FF); // PURPLE
  CircuitPlayground.setPixelColor(10, 0xFF9100); // ORANGE
  }

  // If the Snap Button is connected to the "I’m confused, keep explaining" label then...
  // Blue Neopixel will turn ON to represent that the student is confused about the content
  if(confusedSwitch == 0){
  CircuitPlayground.setPixelColor(0, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(1, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(2, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(3, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(4, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(5, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(6, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(7, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(8, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(9, 0x0004FF); // BLUE
  CircuitPlayground.setPixelColor(10, 0x0004FF); // BLUE
  }

  // If the Snap Button is connected to the "I need help" label then...
  // Yellow & Orange Neopixel will turn ON to represent that the student needs help to understand the content
  if(helpSwitch == 0){
  CircuitPlayground.setPixelColor(0, 0xFBFF00); // YELLOW
  CircuitPlayground.setPixelColor(1, 0xFF9100); // ORANGE
  CircuitPlayground.setPixelColor(2, 0xFBFF00); // YELLOW
  CircuitPlayground.setPixelColor(3, 0xFF9100); // ORANGE
  CircuitPlayground.setPixelColor(4, 0xFBFF00); // YELLOW
  CircuitPlayground.setPixelColor(5, 0xFF9100); // ORANGE
  CircuitPlayground.setPixelColor(6, 0xFBFF00); // YELLOW
  CircuitPlayground.setPixelColor(7, 0xFF9100); // ORANGE
  CircuitPlayground.setPixelColor(8, 0xFBFF00); // YELLOW
  CircuitPlayground.setPixelColor(9, 0xFF9100); // ORANGE
  CircuitPlayground.setPixelColor(10, 0xFBFF00); // YELLOW
  }

  // If the Snap Button is connected to nothing then...
  // Neopixel will be OFF which represent a neutral state
  else{
  CircuitPlayground.clearPixels();
  }
}
