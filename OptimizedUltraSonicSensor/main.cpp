#define TRIG 13
#define ECHO1 12
#define ECHO2 11
#define ECHO3 10

void setup() {
  Serial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO1,INPUT);
  pinMode(ECHO2,INPUT);
  pinMode(ECHO3,INPUT);
}
int sonar(int pinotrig,int pinoecho){
  digitalWrite(pinotrig,LOW);
  delayMicroseconds(2);
  digitalWrite(pinotrig,HIGH);
  delayMicroseconds(10);
  digitalWrite(pinotrig,LOW);
  return pulseIn(pinoecho,HIGH)/58;
}
  
void loop() {
      int distancia1 = sonar(TRIG,ECHO1);
  	  Serial.print("Distancia1: ");
      Serial.print(distancia1);
  
  	  int distancia2 = sonar(TRIG,ECHO2);
  	  Serial.print("	Distancia2: ");
      Serial.print(distancia2);
  
      int distancia3 = sonar(TRIG,ECHO3);
  	  Serial.print("	Distancia3: ");
      Serial.println(distancia3);
  	  delay(4000);
      
}
