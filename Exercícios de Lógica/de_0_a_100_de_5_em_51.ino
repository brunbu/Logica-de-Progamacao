// Exibir do 0 ao 100 de 5 em 5

void setup()
{
  Serial.begin(9600);
}


void loop()
{
 
 
 int contadorWhile = 0; 
  
  while(contadorWhile <= 100) {
   Serial.println(String(contadorWhile));
   //contadorWhile = contadorWhile 1; 
    contadorWhile+= 5;
    
    delay(1000);
  }
}