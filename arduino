
//declaração de variaveis
int led_vermelho = 2;
int led_amarelo = 3;
int led_verde = 4;
int led_vermelho2 = 5;
int led_amarelo2 = 6;
int led_verde2 = 7;

// C++ code
//
void setup()
{
  //defindo portas do arduino
  
   pinMode(led_vermelho,OUTPUT);
   pinMode(led_amarelo,OUTPUT);
   pinMode(led_verde,OUTPUT);
   pinMode(led_vermelho2,OUTPUT);
   pinMode(led_amarelo2,OUTPUT);
   pinMode(led_verde2,OUTPUT);
}

void loop()
{
  //estado 1 - verde 1 ligado vermelho 2 ligado
  digitalWrite(led_verde,HIGH);
  digitalWrite(led_amarelo,LOW);
  digitalWrite(led_vermelho,LOW);
  digitalWrite(led_verde2,LOW);
  digitalWrite(led_amarelo2,LOW);
  digitalWrite(led_vermelho2,HIGH);
  
  //aguardar 5 segundos
  delay(5000);
  //estado 2 - amarelo 1 ligado vermelho 2 ligado
  digitalWrite(led_verde,LOW);
  digitalWrite(led_amarelo,HIGH);
  digitalWrite(led_vermelho,LOW);
  digitalWrite(led_verde2,LOW);
  digitalWrite(led_amarelo2,LOW);
  digitalWrite(led_vermelho2,HIGH);
   //aguardar 3 segundos
  delay(3000);
   //estado 3 - vermelho 1 ligado verde 2 ligado
  digitalWrite(led_verde,LOW);
  digitalWrite(led_amarelo,LOW);
  digitalWrite(led_vermelho,HIGH);
  digitalWrite(led_verde2,HIGH);
  digitalWrite(led_amarelo2,LOW);
  digitalWrite(led_vermelho2,LOW);
   //aguardar 5 segundos
  delay(5000);
   //estado 4 - amarelo 2 ligado vermelho 1 ligado
  digitalWrite(led_verde,LOW);
  digitalWrite(led_amarelo,LOW);
  digitalWrite(led_vermelho,HIGH);
  digitalWrite(led_verde2,LOW);
  digitalWrite(led_amarelo2,HIGH);
  digitalWrite(led_vermelho2,LOW);
  //aguardar 3 segundos
  delay(3000);
}
