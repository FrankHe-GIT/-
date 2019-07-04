void setup()
{
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);

}
int income;

void loop()
{
  if(Serial.available()>0)
    {
        income=Serial.read()-'0';
        Serial.print(income);
  
  if(income=0)
  {
      digitalWrite(5,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
  }
  
  if(income=1)
  {
      digitalWrite(5,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
  }
  
  if(income=2)
  {
      digitalWrite(5,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
  }
  
  if(income=3)
  {
      digitalWrite(5,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
  }
  
  if(income=4)
  {
      digitalWrite(5,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
  }
  
  if(income=5)
  {
      digitalWrite(5,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
  }
  
  if(income=6)
  {
      digitalWrite(5,LOW);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
  }
  
  if(income=7)
  {
      digitalWrite(5,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
  }
  
  if(income=8)
  {
      digitalWrite(5,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
  }
  
  if(income=9)
  {
      digitalWrite(5,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
  }
    
  }
}
