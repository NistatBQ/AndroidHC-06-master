int val;

int R1 = 2;
int R2 = 3;
int R3 = 4;
int R4 = 5;
int R5 = 6;
int R6 = 7;
int R7 = 8;

void setup()
{
  Serial.begin(9600);
  
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(R5, OUTPUT);
  pinMode(R6, OUTPUT);
  pinMode(R7, OUTPUT);
  
  digitalWrite(R1, HIGH);  
  digitalWrite(R2, HIGH);  
  digitalWrite(R3, HIGH);  
  digitalWrite(R4, HIGH); 
  digitalWrite(R5, HIGH);  
  digitalWrite(R6, HIGH);
  digitalWrite(R7, HIGH);
  
}
void loop()
{
  if (Serial.available())
  {
    val = Serial.read();
    
    if (val == '1')
    {
      digitalWrite(R1, LOW);
      delay(500);
      digitalWrite(R1, HIGH);      
    }
    
    if (val == '2')
    {
      digitalWrite(R2, LOW);
      delay(500);
      digitalWrite(R2, HIGH);      
    }
    
    if (val == '3')
    {
      digitalWrite(R3, LOW);
      delay(500);
      digitalWrite(R3, HIGH);      
    }
    
    if (val == '4')
    {
      digitalWrite(R4, LOW);
      delay(500);
      digitalWrite(R4, HIGH);      
    }
    
    if (val == '5')
    {
      digitalWrite(R5, LOW);
      delay(500);
      digitalWrite(R5, HIGH);      
    }
    
    if (val == '6')
    {
      digitalWrite(R6, LOW);
      delay(500);
      digitalWrite(R6, HIGH);      
    }
    
    if (val == '7')
    {
      digitalWrite(R7, LOW);
      delay(500);
      digitalWrite(R7, HIGH);      
    }    
  }
}
