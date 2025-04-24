// C++ code
//
void setup()
{
 Serial.begin (9600);
}
//inicialização das variáveis
float medidapl = 0;
float medidacm = 0;


void loop()
{
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|       LOPAL - Ex_06         |");
  Serial.println("|                             |");  
  Serial.println("|-----------------------------|");
  Serial.println();
  Serial.println();

  
  
 
Serial.println("Digite a medida");
while (! Serial.available() );
medidapl = Serial.parseFloat ();
  
  medidacm = medidapl / 2.54;
  
  Serial.println ("Sua medida em cm eh: " + String(medidacm) );
  Serial.println();
  Serial.println();
  
  delay (5000);
}

