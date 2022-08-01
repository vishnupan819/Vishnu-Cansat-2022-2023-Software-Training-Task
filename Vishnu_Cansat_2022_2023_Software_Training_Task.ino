#include <Servo.h>

// C++ code
// By Vishnu Panganamamula

int redPin = 3;
int bluePin = 5;
int greenPin = 6;
int Vout_pin = A0;
int temp_input;
float temp;
int angle;

Servo my_Servo;

void setup()
{
my_Servo.attach(9); 
 
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);
pinMode(greenPin, OUTPUT);

analogWrite(redPin, 0);
analogWrite(greenPin, 0);
analogWrite(bluePin, 0);

Serial.begin(9600);
}

void loop()
{
temp_input = analogRead(Vout_pin);
float voltage = (temp_input/1024.0)*5.0;
float temp = (voltage - 0.5)*100;
angle = map(temp, -40, 125, 0, 180);
my_Servo.write(angle);
Serial.println("Temperature: ");
  
  //Blue Colour
  if(temp >= -40 && temp <= -10){
    Serial.println("LED is Blue. ");
    setColour(0,0,255);
  }
  
  //Green Colour
  else if(temp > -10 && temp <= 20){
    Serial.println("LED is Green. ");
    setColour(0,255,0);
  } 
  
  //Yellow Colour
  else if(temp > 20 && temp <= 50){
    Serial.println("LED is Yellow. ");
    setColour(255,255,0);
  }
  
  //Purple Colour
  else if(temp > 50 && temp <= 80){
    Serial.println("LED is Purple. ");
    setColour(140,85,180);
  }
  
  //Red Colour
  else if(temp > 80 && temp <= 110){
    Serial.println("LED is Red. ");
    setColour(255,0,0);
  }
  
  //White Colour
  else if(temp > 110 && temp <= 125){
    Serial.println("LED is White. ");
    setColour(255,255,255);
  }
  
}

void setColour(int redValue, int greenValue, int blueValue){
  analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
