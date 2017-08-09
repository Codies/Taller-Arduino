
const int led = 3;  // led conectado al pin 3
const int pot = A0; // el pot esta conectado al pin A0

int brillo;  //variable para el brillo

void setup ()  {
pinMode (led, OUTPUT);  // declaramos el led como salida
}

void loop (){

brillo = analogRead (pot) / 4;
Serial.println (brillo);
analogWrite(led, brillo);
}
