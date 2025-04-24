//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semanas

// Variáveis
int anoNascimento = 0;
int anoAtual = 0;
int idade = 0;
long idadeSemana = 0;

void setup() {
  Serial.begin(9600);
}

void loop() 
{
  
  //Cabeçalho - 
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|         LOPAL - EX_02        |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  //entrada 
  Serial.println("Digite o ano do seu nascimento:");
  while (!Serial.available());
  anoNascimento = Serial.parseInt();

  Serial.println("Digite o ano atual:");
  while (!Serial.available());
  anoAtual = Serial.parseInt();

  //processo
  idade = anoAtual - anoNascimento;
  idadeSemana = idade * 52.1429;

  //saída
  Serial.println("Sua idade: " + String(idade) + " anos");
  Serial.println("Sua idade em semanas: " + String(idadeSemana) + " semanas");
}
