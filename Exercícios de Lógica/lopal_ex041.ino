//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso(altura * altura).

//Variavel
String nome = "";
float peso, altura;
float imc = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  //Cabeçalho - 
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|         LOPAL - EX_04        |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
//entrada  
Serial.println("Digite o seu nome");
while (! Serial.available ());
nome = Serial.readString();
  
Serial.println("Digite o seu peso");
while (! Serial.available());
peso = Serial.parseInt();
  
Serial.println("Digite a sua altura");
while (! Serial.available()); 
altura = Serial.parseFloat(); //usar ponto ao invés de virgula
  
//processamento
imc =  peso /  (altura * altura);
     
//saída
Serial.println("Seu nome eh:" + String(nome) );
Serial.println("Seu imc eh:" + String(imc) );
Serial.println();  
delay(1000); 
}


  
  