void setup()
{
  pinMode(11, OUTPUT);//rojo
  pinMode(10, OUTPUT);//azul
  pinMode(9, OUTPUT); //verde
}

void loop()
{
  int r=random(255);//0-255
  int b=random(255);
  int g=random(255);
  
  analogWrite(11,r);
  analogWrite(10,b);
  analogWrite(9,g);
  delay(290);
}
