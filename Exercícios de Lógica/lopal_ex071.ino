//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.
//Variavel
String nome = "", cargo = "Secretario";
float S = 0;
float S10 = 0;  

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //entrada
  
  //pegar o nome, cargo e salário do usuário
  Serial.println("Qual e o nome do funcionario?");
  while (! Serial.available());
  nome = Serial .readString();
  
  Serial.println("Qual eh o cargo de " + nome);
  while (! Serial.available());
  cargo = Serial.readString();
  
  Serial.println("Qual eh o salario de " + nome);
  while (! Serial.available());
  S = Serial .parseFloat();
  
  //processo
  S10 = S * 1.10;
  
  //saída
  Serial.println();
  Serial.println();
  
  Serial.println("Relatorio");
  Serial.println();
  Serial.println("--------------------");
  Serial.println();
  
  Serial.println("Nome: " + nome);
  Serial.println("cargo: " + cargo);
  Serial.println("salario antigo: RS " + String(S));
  Serial.println("salario atualizado: RS " + String(S10) );
  Serial.println();
    
  Serial.println("--------------------");
                 
  Serial.println("Digite uma letra + <Enter> para continuar ...");//gambi para fazer oprogama parar
  while (! Serial.available());
                 
  Serial.println();
  Serial.println();
  
  Serial.read();//limpa o cache do \n - o <Enter>
                 
                 }
                