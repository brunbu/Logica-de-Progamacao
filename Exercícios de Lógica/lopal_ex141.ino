/* Faça um programa receba dois valores e imprima qual é o maior número
digitado.
*/
//VARIÁVEIS 
float numero1 = 0;
float numero2 = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
 Serial.println("digite o primeiro numero = ");
 while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
 numero1 = Serial.parseFloat(); // le o texto digitado pelo usuario
  
 Serial.println("digite o Segundo numero = ");
 while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
 numero2 = Serial.parseFloat(); // le o texto digitado pelo usuario
  
 if ( numero1 > numero2){
  Serial.println("o maior e o primeiro numero ");
 while( ! Serial.available() ){}//Aguarda o usuário digitar (para loop)
  numero1 = Serial.parseInt(); // le o texto digitado pelo usuario
   
  } else {
  Serial.println("o maior e o segundo numero");
  }
}