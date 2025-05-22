// C++ code
//
int ledInterno = 13;//0
int sensorUmidade = 7;
int ledInterno4 = 4;
int sensorUmidade20 = 20;
void setup()
{
  pinMode(ledInterno, OUTPUT);
  pinMode(ledInterno4, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_BUILTIN, INPUT);
}

void loop()
{
  
  
  
  
  
  
  
  digitalWrite(ledInterno, HIGH);
  delay(1000); 
  digitalWrite(ledInterno, LOW);
  delay(1000); 
  digitalWrite(ledInterno4, HIGH);
  delay(1000); 
  digitalWrite(ledInterno, LOW);
  delay(1000);  
}