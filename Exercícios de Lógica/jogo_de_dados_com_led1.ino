// C++ code
//criar uma funcao para exibir um cabecalho --- PROGRAMA JOGO DE DADOS --

//Variaveis globais
int ledVerde = 11;
int ledVermelho = 8;
int ledAzul = 4;
int ledAzul2 = 3;
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
  randomSeed(analogRead(0));//inicia e normaliza a porta randoomica para evitar pegar o mesmo numero
}

void loop()
{
  desenhaCabecalho();//desenha o cabecalho

  //Entrada
  Serial.println("Quantas vezes voce quer jogar?");
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();//rodadas do usuario

  int vetPalpites[qtdRodadas];//tamanho do vetor?
  int vetResultados[qtdRodadas];


  for(int r = 0;r < qtdRodadas; r++)
  {//aqui dentro, o jogo todo!!!
    Serial.println("Digite um palpite 1 a 6: ");
    while(!Serial.available());
    int numeroPalpite = Serial.parseInt();
    //jogar o dado- sorteia um numero randomico/aleatorio de 1 ate 7 - 1, ou seja, 6
    int numeroSorteado = random(1,7);//numero de 1 a 6
    //guardar os dados para estatisticas 		
    //exibir o palpite do usuario

    vetPalpites[r] = numeroPalpite;
    vetResultados
      [r] = numeroSorteado; 

    Serial.println("Seu palpite: " + String(numeroPalpite));

    desenhaPontinhos();

    Serial.println("Numero sorteado: " + String(numeroSorteado));


    if(numeroPalpite == numeroSorteado)
    {
      Serial.println("Parabens, voce ganhhou!");

    } else {

      Serial.println("Que pena, tente outra vez!");

    }

    Serial.println("Reiniciando o sistema....");
    delay(500);

  }//fim do for da rodada

  //ao finalizar, mostrar as estatisticas das jogadas - um relatorio
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

    
    
    
     switch (resultado) {
  case 1:
       resultado2 = (int(NumeroSorteado));
    digitalWrite(ledVerde, HIGH);
   break;
  
  case 2:
       digitalWrite(ledVermelho, HIGH);
    break;
   
  case 3:
     digitalWrite(ledAzul, HIGH);
   break;
      
     case 4:
     digitalWrite(ledAzul2, HIGH);
   break;
    
     case 5:
     digitalWrite(ledAzul, HIGH);
   break;
    
  }

  //ao finalizar

  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
  } 
}