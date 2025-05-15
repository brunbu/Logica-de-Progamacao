// While - È ua estrutura  de repetição que só executa repetição/laço enquanto 
// a condiçao for verdadeira
/**/


void setup()
{
  Serial.begin(9600);
}

//função
void loop()
{
 
 //while
 int contadorWhile = 0; //variavel local
  
  while(contadorWhile <= 100) {
   Serial.println(String(contadorWhile));
   //contadorWhile = contadorWhile 1; 
    contadorWhile++;
    
    delay(1000);
  }
}