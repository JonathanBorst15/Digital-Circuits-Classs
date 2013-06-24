void setup ()
{
  pinMode(13, OUTPUT);
  pinMode(9,INPUT);
}

void loop()
{
  if ( digitalRead(9) == HIGH )
  {
  digitalWrite(9, HIGH);
delay(250); 
digitalWrite(3,LOW);
delay(2000);
  }
  else
  {
    digitalWrite(3, LOW);
  }
 
  delay(1); 
}
