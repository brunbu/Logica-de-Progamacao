/*
Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.

*/


// C++ code
//Variaveis
float preco;
float percentual; 
float precofinal;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 Serial.println("Digite o preco");
 while(!Serial.available()); 
 preco = Serial.parseFloat(); //guarda a resposta do usuario
  
 Serial.println("Digite o percentual");
 while(!Serial.available()); 
 percentual = Serial.parseFloat(); //guarda a resposta do usuario
 
   
 //processamento
       
 if(percentual< 1.5){
 Serial.println("a margem de lucro esta baixa");
 }else{
 Serial.println("a margem de lucro esta boa");
 }
       }
         
  
  
  
  
