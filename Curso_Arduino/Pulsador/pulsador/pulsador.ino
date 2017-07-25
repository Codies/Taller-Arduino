int pulsador=0;                     


void setup() {
  pinMode(2, OUTPUT);        
  pinMode(4, INPUT); 
}

void loop() {
  pulsador = digitalRead(4); 
  if(pulsador==HIGH) {      
    digitalWrite(2, HIGH);     
  }
  else{           
    digitalWrite(2, LOW); 
  }
}
