/*
Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/

// C++ code
//Variaveis
float n1, n2, media;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //entrada 
 Serial.println("Digite a primeira nota");//esperar a reposta do usuario
 while (!Serial.available());
 n1 =(Serial.parseFloat());
  
 Serial.println("Digite a segunda nota");//esperar a reposta do usuario
 while (!Serial.available());
 n2 =(Serial.parseFloat());
 //processamento 
 media = (n1 + n2) / 2;
 Serial.println("Media " + String(media) );
  
 if ( media >= 6 ) {
  Serial.println("Aprovado");
 } else if { ( media < 6 ) {
   Serial.println("Reprovado");
 }
           
 //Tive que pegar uma referencia no processamento
}