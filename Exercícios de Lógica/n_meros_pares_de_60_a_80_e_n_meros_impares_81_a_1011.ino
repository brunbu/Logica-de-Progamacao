// Exibir os numeros pares de 60 a 80 Números impares 81 a 101

void setup()
{
  Serial.begin(9600);
}


void loop()
{
 
 int contadorWhile = 60; 
  
  while(contadorWhile <= 80) {
   Serial.println(String(contadorWhile));
   //contadorWhile = contadorWhile 1; 
    contadorWhile+= 2;
    
    delay(1000);
  }
  int contador = 81; 
 
  
  while(contador <= 101) {
   Serial.println(String(contador));
   //contadorWhile = contadorWh 1; 
    contador+= 2;      

  
    delay(1000);
  }
}