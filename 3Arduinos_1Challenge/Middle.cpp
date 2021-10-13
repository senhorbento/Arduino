#define tmp 1000

#define PinRl  49
#define PinGl  51
#define PinBl  53
#define PinRr  48
#define PinGr  50
#define PinBr  52

void apagar(){
  digitalWrite(PinRl, 0);
  digitalWrite(PinGl, 0);
  digitalWrite(PinBl, 0);
  digitalWrite(PinRr, 0);
  digitalWrite(PinGr, 0);
  digitalWrite(PinBr, 0);
}

void estadoE(int v){
  if(v == 0){
      digitalWrite(PinRl, 1);
      digitalWrite(PinGl, 0);
      delay(tmp); 
      Serial.write('1');
      Serial3.write('0');
      apagar();
      delay(tmp);
  }
  else{
      digitalWrite(PinRl, 0);
      digitalWrite(PinGl, 1);
      delay(tmp); 
      Serial.write('0');
      Serial3.write('1');
      apagar();
      delay(tmp);
  }
}

void estadoR(int v){
  if(v == 0){
      digitalWrite(PinRr, 1);
      digitalWrite(PinGr, 0);
      delay(tmp); 
      Serial.write('1');
      apagar();
      delay(tmp);
  }
  else{
      digitalWrite(PinRr, 0);
      digitalWrite(PinGr, 1);
      delay(tmp); 
      Serial.write('0');
      apagar();
      delay(tmp);
  }
}

void setup() { 
  Serial.begin(9600);
  Serial3.begin(4800);
  pinMode(PinRl, OUTPUT);
  pinMode(PinGl, OUTPUT);
  pinMode(PinBl, OUTPUT);
  apagar();
  estado(0);  
} 
  
void loop() {
  char recebido;
  int espera;
  
  if(Serial.available()){
    recebido = Serial.read();
    digitalWrite(PinBl, 1);
    delay(tmp);   
     
    if(recebido == '1')
      estadoE(1);
    else if (recebido == '0')
      estadoE(0);
    espera = 1;
    
    while(espera != 0){
      if(Serial3.available()){
        recebido = Serial3.read();
        digitalWrite(PinBr, 1);
        delay(tmp);    

        if(recebido == '1')
          estadoR(1);
        else if (recebido == '0')
          estadoR(0);
        espera --;
      }
    }
  } 
}
