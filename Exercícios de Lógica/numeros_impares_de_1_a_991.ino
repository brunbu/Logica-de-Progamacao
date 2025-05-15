// Exibir os numeros pares de 0 a 100

void setup()
{
  Serial.begin(9600);
}


void loop()
{
 
 
 int contadorWhile = 1; 
  
  while(contadorWhile <= 99) {
   Serial.println(String(contadorWhile));
   //contadorWhile = contadorWhile 1; 
    contadorWhile+= 2;
    
    delay(1000);
  }
}