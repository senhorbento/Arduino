#include <Servo.h>

Servo servoMotorObj1;  
Servo servoMotorObj2;
Servo servoMotorObj3;  
Servo servoMotorObj4;
  
#define potenciometroPin1 0
#define potenciometroPin2 1
#define potenciometroPin3 2
#define potenciometroPin4 3 
 
#define servoMotorPin1 5
#define servoMotorPin2 4    
#define servoMotorPin3 3
#define servoMotorPin4 2

int valPotenciometro1; 
int valPotenciometro2; 
int valPotenciometro3; 
int valPotenciometro4; 
  
void setup() { 
  servoMotorObj1.attach(servoMotorPin1); 
  servoMotorObj2.attach(servoMotorPin2);
  servoMotorObj3.attach(servoMotorPin3); 
  servoMotorObj4.attach(servoMotorPin4);
} 
  
void loop() { 
  valPotenciometro1 = analogRead(potenciometroPin1); 
  valPotenciometro2 = analogRead(potenciometroPin2);
  valPotenciometro3 = analogRead(potenciometroPin3); 
  valPotenciometro4 = analogRead(potenciometroPin4);

  valPotenciometro1 = map(valPotenciometro1, 0, 1023, 0, 180); 
  valPotenciometro2 = map(valPotenciometro2, 0, 1023, 0, 180); 
  valPotenciometro3 = map(valPotenciometro3, 0, 1023, 0, 180); 
  valPotenciometro4 = map(valPotenciometro4, 0, 1023, 0, 180);
  
  servoMotorObj1.write(valPotenciometro1);
  servoMotorObj2.write(valPotenciometro2);
  servoMotorObj3.write(valPotenciometro3);
  servoMotorObj4.write(valPotenciometro4); 

  delay(10);   
}
