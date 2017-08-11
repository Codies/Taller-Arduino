const int LED_ROJO_COCHE = 3;
const int LED_AMBAR_COCHE = 4;
const int LED_VERDE_COCHE = 5;
const int LED_ROJO_PEATON = 6;
const int LED_VERDE_PEATON = 7;
const int BOTON = 2;

int estadoBoton = 0;

void setup() {

pinMode(LED_ROJO_COCHE, OUTPUT);
pinMode(LED_AMBAR_COCHE, OUTPUT);
pinMode(LED_VERDE_COCHE, OUTPUT);
pinMode(LED_ROJO_PEATON, OUTPUT);
pinMode(LED_VERDE_PEATON, OUTPUT);
pinMode(BOTON, INPUT);

}

void loop() {
digitalWrite(LED_VERDE_COCHE, HIGH);
digitalWrite(LED_ROJO_PEATON, HIGH);

estadoBoton = digitalRead (BOTON);

if (estadoBoton == HIGH) {
digitalWrite(LED_VERDE_COCHE, LOW);
digitalWrite(LED_AMBAR_COCHE, HIGH);
delay(500);
digitalWrite(LED_AMBAR_COCHE, LOW);
digitalWrite(LED_ROJO_COCHE, HIGH);
digitalWrite(LED_ROJO_PEATON, LOW);
digitalWrite(LED_VERDE_PEATON, HIGH);
delay(5000);
digitalWrite(LED_VERDE_PEATON, LOW);
delay(200);
digitalWrite(LED_VERDE_PEATON, HIGH);
delay(200);
digitalWrite(LED_VERDE_PEATON, LOW);
delay(200);
digitalWrite(LED_VERDE_PEATON, HIGH);
delay(200);
digitalWrite(LED_VERDE_PEATON, LOW);
digitalWrite(LED_ROJO_COCHE, LOW);
}

}
