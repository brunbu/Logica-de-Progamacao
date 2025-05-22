// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  Serial.println("*** SACOLA DO ZEH ***");
  Serial.println();
  
  String frutas[6];//cria um vetor tamanho 6 (preenchendo asd posições)
  
  Serial.println("Oh ZEH, bora cadastrar as frutas!");
  
  Serial.println();
  
  for(int i = 0; i <= 5; i++){
    //pega a fruta do usuario
    Serial.println("Informe a "+ String(i + 1) + "a fruta:");
    while(!Serial.available());
    String fruta = Serial.readString();
    
    //poe a freuta na sacola / cadastra fruta no array/vetor
    frutas[i] = frutaDigitada;
    
  }//fim do for
  
  //Desafio: crie um for para exibir as frutas cadastradas
  for(int i = 0; i <= 5; i++);
  {
    Serial.println(String(i + 1) + "a fruta:" + frutas[i]);
  }
  
}//fim do setup
  
  


void loop()
{
  
}