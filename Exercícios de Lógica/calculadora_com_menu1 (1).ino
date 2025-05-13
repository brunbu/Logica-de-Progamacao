float resultado;
int escolhaDaOperacao;
int contador;


float somar(float numero1, float numero2){
  return(numero1 + numero2);
}

float Subtrair(float numero1, float numero2){
  return (numero1 - numero2);
}

float multiplicar(float numero1, float numero2){
  return(numero1 * numero2);
} 


float Dividir(float numero1, float numero2){
  return(numero1 / numero2);
}





void setup()
{
  Serial.begin(9600);

  float numero1 = 0.0; // variavel local
  float numero2 = 0.0;
  
  do{
    Serial.println("Oba,Bem-vindo (a) a calculadora mega inteligente : Valeu por usar.");
    Serial.println("Mano Escolha uma das opcoes/operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - multiplicar");
    Serial.println("4 - Dividir");

    while(!Serial.available());{} //Espera o usuário digitar

    escolhaDaOperacao = Serial.parseInt(); // Armazena o que o usuário digitou na variavel

    Serial.println("Certo, Agora, para realizar a operacao, digite o primeiro numero");
    while(!Serial.available());{} //Espera o usuário digitar
    numero1 = Serial.parseFloat();

    Serial.println("Agora, digite o segundo numero");
    while(!Serial.available());{} //Espera o usuário digitar
    numero2 = Serial.parseFloat();


    switch(escolhaDaOperacao){
      case 1:
       
      	resultado = somar(numero1, numero2);
      	Serial.println("WOW! O resultado foi:" + String(resultado));
      	break;

      case 2:
      	resultado = Subtrair(numero1, numero2);
      	Serial.println("WOW! O resultado foi:" + String(resultado));
      	break;

      case 3:
      	resultado = multiplicar(numero1, numero2);
      	Serial.println("WOW! O resultado foi:" + String(resultado));

      	break;

      case 4: 
      	resultado = Dividir(numero1, numero2);
      	Serial.println("WOW! O resultado foi:" + String(resultado));

      	break;

      default:
      	Serial.println("Opcao invalida");
    } 

    Serial.println("Mano voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(!Serial.available());{} //Esperar o usuario digitar

    if (Serial.readString() == "s"){
      contador++;
    }
    else{
      contador = 0;
      Serial.println("Valeu meu mano, volte sempre e nois");
      Serial.println("Mano se tu quiser voltar, reinicia o sistema.");
    }

  }
  while(contador != 0);
}

void loop()
{}