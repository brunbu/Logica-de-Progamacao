//faça um programa que receba um numero e exiba o seu dobro
//VARIAVEIS
int numero = 0;
int numerodobro = 0;

void setup()
{
  Serial.begin(9600);
}

void loop() {
  //Entrada
  Serial.println("Digite um numero:");

  //Espera até que o usuário digite algo
  while (Serial.available() == 0) {
    // apenas aguardando dados serem digitados
  }

  numero = Serial.parseInt(); // Lê o número digitado
  numerodobro = numero * 2;   // Calcula o dobro

  //Saída
  Serial.println("Seu numero: " + String(numero));
  Serial.println("O dobro do numero: " + String(numerodobro));

  delay(5000); // Espera 5 segundos antes de repetir
}