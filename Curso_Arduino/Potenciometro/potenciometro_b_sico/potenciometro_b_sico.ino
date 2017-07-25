

const int POTENCIOMETRO = A0;  

int valorPotenciometro;  

void setup() {
  Serial.begin(9600);  
}

void loop() {
  valorPotenciometro = analogRead(POTENCIOMETRO); 
  Serial.println(valorPotenciometro);   
  delay(1);     
}

