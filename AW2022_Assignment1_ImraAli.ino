#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

int understandSwitch;
int confusedSwitch;
int helpSwitch;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  Serial.begin(9600);
  pinMode(12, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);

}

void loop() {

  understandSwitch = digitalRead(12);
  confusedSwitch = digitalRead(6);
  helpSwitch = digitalRead(9);
  
  if(understandSwitch == 0){

  // put your main code here, to run repeatedly:
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
  
  else{
  CircuitPlayground.clearPixels();
  }
}
