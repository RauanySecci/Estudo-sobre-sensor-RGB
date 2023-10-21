const int S0 = 22;
const int S1 = 24;
const int S2 = 26;
const int S3 = 28;
const int out = 30;
 
//Pinos do led RGB
//#define pinoledverm = 3;
//#define pinoledverd = 5;
//#define pinoledazul = 6;
 
//Variaveis cores
int red = 0;
int green = 0;
int blue = 0;
 
void setup()
{
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(out, INPUT);
//  pinMode(pinoledverm, OUTPUT);
//  pinMode(pinoledverd, OUTPUT);
//  pinMode(pinoledazul, OUTPUT);
  Serial.begin(9600);
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
}
 
void loop(){
// leitura da cor vermelha
digitalWrite(S2,LOW); // configuração para os Fotodiodos red serem lidos
digitalWrite(S3,LOW); // configuração para os Fotodiodos red serem lidos
red = pulseIn (out, LOW); // armazena na variável red a frequência lida em OutSensor

// leitura da cor verde
digitalWrite(S2,HIGH); // configuração para os Fotodiodos green serem lidos
digitalWrite(S3,HIGH); // configuração para os Fotodiodos green serem lidos
green = pulseIn (out, LOW); // armazena na variável green a frequência lida em OutSensor

 
// leitura da cor azul
digitalWrite(S2,LOW); // configuração para os Fotodiodos blue serem lidos
digitalWrite(S3,HIGH); // configuração para os Fotodiodos blue serem lidos
blue = pulseIn (out, LOW); // armazena na variável blue a frequência lida em OutSensor

  // condiçoes para detecção das cores e atuação do servo motor
  if (47 < red && red < 70 &&  140 < green && green < 180 && 110 < blue && blue < 130){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("Vermelho"); }
  else if (140 < red && red < 160 && 85 < green < green < 115 && 45< blue && blue < 65){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("Azul");}
  else if (150 < red && red < 175 &&  130< green && green < 155 && 120< blue && blue < 140){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("Verde");}
  else if (30<red&&red<55 &&  110 < green && green < 135 && 105 < blue && blue < 125){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("Laranja");}
  else if (25 < red && red < 45 &&  35 < green && green < 55 && 55 < blue && blue < 76){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("Amarelo");}
  else if (65 < red && red < 90 &&  100 < green && green < 120 && 50 < blue && blue < 77){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("Roxo");}
  else if (115 < red && red < 135 &&  155 < green && green < 170 && 110 < blue && blue < 140){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("Marron");}
  else if (80 < red && red < 95 &&  55 < green && green < 70 && 35 < blue && blue < 50){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("Azul Claro");}
  else if (74 < red && red < 90 &&  45 < green && green < 75 && 60 < blue && blue < 90){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo 
    Serial.println("Verde Claro");} 
  else if (red > 240 && green > 270 && blue > 200){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("Preto");}
  else if (red < 50 && green < 50 && blue < 50){ // se os valores de RGB estiverem dentro dos parâmetros determinados, executa o codigo abaixo
    Serial.println("Branco");}
    Serial.println(); // quebra um linha no texto do serial monitor
     // atraso de 300 milisegundos
}
