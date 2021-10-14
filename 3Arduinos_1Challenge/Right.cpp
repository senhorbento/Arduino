#define PinR  7
#define PinG  6 
#define PinB  5            

void estado(int v){
  if(v == 0){
      apagar();
      Serial.write('0');
  }
  else{
      acender();
      Serial.write('1');
  }
}

void apagar(){
  digitalWrite(PinR, 0);
  digitalWrite(PinG, 0);
  digitalWrite(PinB, 0);
}

void acender(){
  digitalWrite(PinR, 1);
  digitalWrite(PinG, 1);
  digitalWrite(PinB, 1);
}

void setup() { 
  Serial.begin(4800);
  pinMode(PinR, OUTPUT);
  pinMode(PinG, OUTPUT);
  pinMode(PinB, OUTPUT);
  estado(1);
} 
  
void loop() {
  char recebido;
  
  if(Serial.available()){
    recebido = Serial.read();
    
    if(recebido == '1')
      estado(1);
    
    else if (recebido == '0')
      estado(0);
  }
}
