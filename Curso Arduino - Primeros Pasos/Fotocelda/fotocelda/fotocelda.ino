int lightPin = A0;  
int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;
int read = 0;

void setup(){
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);    
}

void loop(){
    read = analogRead(lightPin);
  
    if(read < 300)
    {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);      
    }
    else if(read >= 300 && read < 600)
    {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
    }
    else if(read >= 600)
    {
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
    }
 
    delay(100);
}
