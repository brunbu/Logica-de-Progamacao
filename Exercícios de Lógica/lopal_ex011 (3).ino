// Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Variáveis
//Ano de Nacimento
int anoDeNasc = 0;
int idade = 0;//inicia a idade
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  //Cabeçalho - 
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|         LOPAL - EX_01        |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  
  
  
  
  
 //entrada
 Serial.println("Digite a seu ano de nascimento");//pergunta a idade do usuário
  while(! Serial.available() );//Aguarda o usuário digitar (para o loop)
 anoDeNasc = Serial.parseInt();
  
 //processo 
  
  idade = 2025 - anoDeNasc;
  
 idadeMeses = idade * 12;
 idadeDias = idade * 365;
 idadeHoras = idadeDias * 24;
 idadeMinutos = idadeHoras * 60;
   
   
 //saída
 Serial.println("Sua idade em meses: " + String(idadeMeses));
 Serial.println("Sua idade em dias: " + String(idadeDias));
 Serial.println("Sua idade em horas: " + String(idadeHoras));
 Serial.println("Sua idade em Minutos: " + String(idadeMinutos)); 

}