// C++ code
//Variaveis Globais
/*
Criar cada vetor tamanho 4,
fazendo perto do mesmo cadastro 

*/
String convidados[4];//criar um vetor tamanho 4
int idadeConvidados[4]; //Camel Case
String emailConvidados[4];

//Funções
void desenhaCabecalho()
{
  Serial.println("*** CHURRASCO DO ZEH ***");
  Serial.println();
  Serial.println();
  delay(2000);
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{ 
  //fazer um cabeçalho para o programa
  desenhaCabecalho();//chama a funções pra desenhar o cabeçalho
  
  for(int i = 0; i < 4; i++)
  {
  Serial.println("Informe " +String(i + 1)+ " o nome para cadastro");
  while(!Serial.available());
  convidados[i] = Serial.readString();
    
  Serial.println("Informe sua idade " + convidados[i]);
  while(!Serial.available());
  idadeConvidados[i] = Serial.parseInt();
  
  Serial.println("Informe seu email " + convidados[i]);
  while(!Serial.available());
  emailConvidados[i] = Serial.readString();
  }
  
  //Exibir a lista de convidados
  //obs: so vai na festa quem for maior de idade >= 18
  
  //criar um for ???
  //exbir com o print cada um dos arrays
  //pular uma linha
  for(int i = 0; i < 4; i++)
  {
  Serial.println("-------- " );
 Serial.println();     
 Serial.println("Nome: " + convidados[i]);   
 Serial.println("Idade: " + String(idadeConvidados[i]));    
 Serial.println("Email: " + convidados[i]);
 Serial.println("Permissao para a festa: " + String(idadeConvidados[i] >= 18 ? "OK" : "Menor de idade"));
     
 Serial.println("-------- " );
 Serial.println();  
 }//fim do if
  
//fim do for


  delay(2000);
}
