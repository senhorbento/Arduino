//Definindo constantes para os pinos dos leds do trânsito
#define _PIN_RED_T     13
#define _PIN_YELLOW_T  12
#define _PIN_GREEN_T   11

//Definindo constantes para os pinos dos leds do pedestre
#define _PIN_RED_P     10
#define _PIN_GREEN_P    9

//Definindo constantes para os pinos dos leds do trânsito 2
#define _PIN_RED_T_2     7
#define _PIN_YELLOW_T_2  6
#define _PIN_GREEN_T_2   5

//Definindo constantes para os pinos dos leds do pedestre 2
#define _PIN_RED_P_2     4
#define _PIN_GREEN_P_2   3

void setup()
{
  //Setando os pinos digitais que vamos utilizar como saida 
  //e desligando/apagando os LEDS do primeiro semáforo
  for(int i = 9; i<14;i++){
  	pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  //Setando os pinos digitais que vamos utilizar como saida 
  //e desligando/apagando os LEDS do segundo semáforo
  for(int i = 3; i<8;i++){
  	pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop()
{
  //Inicio
  
  //Apagando LED pedestre 1 verde
  digitalWrite(_PIN_GREEN_P, LOW);
  //Acendendo LED pedestre 1 vermelho
  digitalWrite(_PIN_RED_P, HIGH);  
  //Apagando LED trânsito 1 vermelho
  digitalWrite(_PIN_RED_T, LOW);
  //Acendendo LED trânsito 1 verde
  digitalWrite(_PIN_GREEN_T, HIGH);

  
  //Apagando LED pedestre 2 vermelho
  digitalWrite(_PIN_RED_P_2, LOW);
  //Acendendo LED pedestre 2 verde
  digitalWrite(_PIN_GREEN_P_2, HIGH);
  //Apagando LED trânsito 2 verde
  digitalWrite(_PIN_GREEN_T_2, LOW);
  //Acendendo LED trânsito 2 vermelho
  digitalWrite(_PIN_RED_T_2, HIGH);    
  //Esperando 5 segundos
  delay(5000); 
  
  //Apagando LED trânsito 1 verde
  digitalWrite(_PIN_GREEN_T, LOW);
  //Acendendo LED trânsito 1 amarelo
  digitalWrite(_PIN_YELLOW_T, HIGH);
  //Esperando 2 segundo
  delay(2000); 
  
  //Apagando LED trânsito 2 vermelho
  digitalWrite(_PIN_RED_T_2, LOW); 
  //Acendendo LED trânsito 2 verde
  digitalWrite(_PIN_GREEN_T_2, HIGH);
  //Apagando LED pedestre 2 verde
  digitalWrite(_PIN_GREEN_P_2, LOW);
  //Acendendo LED pedestre 2 vermelho
  digitalWrite(_PIN_RED_P_2, HIGH);
  
  //Apagando LED trânsito 1 amarelo
  digitalWrite(_PIN_YELLOW_T, LOW);
  //Acendendo LED trânsito 1 vermelho
  digitalWrite(_PIN_RED_T, HIGH);
  //Apagando LED pedestre 1 vermelho
  digitalWrite(_PIN_RED_P, LOW);
  //Acendendo LED pedestre 1 verde
  digitalWrite(_PIN_GREEN_P, HIGH);
  //Esperando 3 segundos
  delay(5000); 
  
  //Apagando LED trânsito 2 verde
  digitalWrite(_PIN_GREEN_T_2, LOW);
  //Acendendo LED trânsito 2 amarelo
  digitalWrite(_PIN_YELLOW_T_2, HIGH);
  //Esperando 2 segundo
  delay(2000); 
  
  //Volta pro inicio
}