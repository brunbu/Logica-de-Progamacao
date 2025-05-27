//Variaveis globais
int ledVerde = 11;
int ledVermelho = 8;
int ledAzul = 4;
int ledAzul2 = 7;
int ledAzul3 = 2;
int resultado;
int Acertar;
int resultado2;
int NumeroSorteado;
void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int ponto = 0; ponto <= 4 ; ponto++){
    Serial.println("."); 
    delay(tempo);
  }
}

void desenhaCabecalho()

{
  Serial.println("--- Programa de Jogo de Dados --- ");
  Serial.println();
  delay(500);
}

void setup()
{
   pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop()
{
  desenhaCabecalho();

  //Entrada
  Serial.println("Quantas vezes voce quer jogar?");
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();
  int vetPalpites[qtdRodadas];
  int vetResultados[qtdRodadas];


  for(int r = 0;r < qtdRodadas; r++)
  {
    Serial.println("Digite um palpite 1 a 6: ");
    while(!Serial.available());
    int numeroPalpite = Serial.parseInt();
   
    int numeroSorteado = random(1,7);
   		
    

    vetPalpites[r] = numeroPalpite;
    vetResultados
      [r] = numeroSorteado; 

    Serial.println("Seu palpite: " + String(numeroPalpite));

    desenhaPontinhos();

    Serial.println("Numero sorteado: " + String(numeroSorteado));


    if(numeroPalpite == numeroSorteado)
    {
      Serial.println("Parabens, voce ganhhou!");
        digitalWrite(ledVerde, HIGH);
      delay(500);
       digitalWrite(ledVerde, LOW);
   {
     digitalWrite(ledAzul, HIGH);
      delay(500);
     {
      digitalWrite(ledAzul2, HIGH);
      delay(500);
       {
      digitalWrite(ledAzul3, HIGH);
      delay(500);
    
    
       } } }  } else {

      Serial.println("Que pena, tente outra vez!");
        digitalWrite(ledVermelho, HIGH);
      delay(500);
      digitalWrite(ledVermelho, LOW);


    }

    Serial.println("Reiniciando o sistema....");
    delay(500);

  }
 
  Serial.println("|-------------------------|");
  Serial.println("|	                        |");
  Serial.println("|**ESTASTISTICAS DO JOGO**|");
  Serial.println("|							|");
  Serial.println("|-------------------------|");
  Serial.println();
  for(int i = 0; i < qtdRodadas; i++)
  {
    Serial.println(" Rodada "+ String (i + 1) + "+");
    Serial.println("  Palpite:  "+ String (vetPalpites[i]));
    Serial.println("  Dado:  "+ String (vetResultados[i]));
    Serial.println("  Resultado:  "+ String (vetResultados[i] == vetPalpites[i] ? "Acertou!" : "Errou!"));
    Serial.println("--------------------");
    Serial.println();

    
  }

  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
  } 
