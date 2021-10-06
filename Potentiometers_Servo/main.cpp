#include <Arduino.h>
#include "Servo.h"

Servo servoMotorObj;  
Servo servoMotorObj2;

unsigned long time;
  
const int potenciometroPin=  0;
const int potenciometroPin2= 1;  
 
const int servoMotorPin=  5;
const int servoMotorPin2= 4;  
 
int valPotenciometro; 
int valPotenciometro2;            
  
void setup() { 
  servoMotorObj.attach(servoMotorPin); 
  servoMotorObj2.attach(servoMotorPin2); 
  time = millis();
} 
  
void loop() {
  if(millis() == time + 10){
    valPotenciometro = analogRead(potenciometroPin); 
    valPotenciometro2 = analogRead(potenciometroPin2);

    valPotenciometro = map(valPotenciometro, 0, 1023, 0, 180); 
    valPotenciometro2 = map(valPotenciometro2, 0, 1023, 0, 180); 

    servoMotorObj.write(valPotenciometro);
    servoMotorObj2.write(valPotenciometro2);
    time = millis();
  }
}

