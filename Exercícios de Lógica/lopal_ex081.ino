/* Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
Ao final exiba o nome, o cargo e o salário desse funcionário.
*/
//Variaveis

void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis
String nome = "nome";
String cargo = "cargo";
float salario = 0;

void loop()
{
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_08         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  
 
  Serial.println("Digite o seu nome");
  while (! Serial.available() );
  nome = Serial.readString ();
  
  Serial.println("Digite o cargo de " + nome );
  while (! Serial.available() );
  cargo = Serial.readString(); 
  
  Serial.println("Digite seu salario");
  while (! Serial.available() );
  salario = Serial.parseFloat();
   
  
  if (salario < 1000 ) {
    salario = salario + ( salario * 0.1 );        
  }
    
  Serial.println ("Seu nome:" + nome );
  Serial.println();
  Serial.println ("Seu cargo eh: " + cargo);
  Serial.println();
  Serial.println ("novo salario: " + String(salario) );
  Serial.println();
  Serial.println("-----------------------------------------");
  
  Serial.println("-----------------------------------------");
  
  Serial.println("Digite uma letra + <Enter> para continuar");
  while (! Serial.available() );
    
  Serial.println();
  Serial.println();
   
}