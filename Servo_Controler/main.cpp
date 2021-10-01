/*
Projeto Arduino controlando um servomotor com potenciômetro
Por Jota
----------------------------------------
--=<| www.ComoFazerAsCoisas.com.br |>=--
----------------------------------------
*/
 
//incluindo biblioteca para controle do servomotor
#include <Arduino.h>
#include "Servo.h"
  
//Criando um objeto da classe Servo
Servo servoMotorObj;  
Servo servoMotorObj2;
  
//pino analógico onde o potenciômetro está conectado
const int potenciometroPin=  0;
const int potenciometroPin2= 1;  
 
//pino digital associado ao controle do servomotor
const int servoMotorPin=  3;
const int servoMotorPin2= 4;  
 
//variável usada para armazenar o valor lido no potenciômetro
int valPotenciometro; 
int valPotenciometro2;            
  
void setup() { 
  //associando o pino digital ao objeto da classe Servo
  servoMotorObj.attach(servoMotorPin); 
  servoMotorObj2.attach(servoMotorPin2); 
} 
  
void loop() 
{ 
  //lendo o valor do potenciômetro (intervalo entre 0 e 1023)
  valPotenciometro = analogRead(potenciometroPin); 
 
  //mapeando o valor para a escala do servo (entre 0 e 180)
  valPotenciometro = map(valPotenciometro, 0, 1023, 0, 180); 

  valPotenciometro2 = analogRead(potenciometroPin); 
 
  valPotenciometro2 = map(valPotenciometro2, 0, 1023, 0, 180); 
 
  //definindo o valor/posição do servomotor
  servoMotorObj.write(valPotenciometro);
  servoMotorObj2.write(valPotenciometro); 

  delay(10);   
}
