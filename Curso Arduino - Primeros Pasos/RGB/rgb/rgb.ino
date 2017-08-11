int rled = 11;
int bled = 10;
int gled = 9;

int i;
int repeat = 5;


void setup() {
pinMode(rled, OUTPUT);
pinMode(bled, OUTPUT);
pinMode(gled, OUTPUT);
}

void loop() {

for(i=0; i<repeat; i++)
  rgbon();
delay(1000);
colors('y');
delay(1000);
colors('o');
delay(1000);
colors('p');
delay(1000);
}
void rgbon(){
analogWrite(rled,255);
delay(500);
analogWrite(rled,0);
analogWrite(bled,255);
delay(500);
analogWrite(bled,0);
analogWrite(gled,255);
delay(500);
analogWrite(gled,0);
}

void colors(char color){

switch(color){
case 'y': analogWrite(rled,255);
analogWrite(gled,255);
analogWrite(bled,0);
break;
case 'o': analogWrite(rled,255);
analogWrite(gled,180);
analogWrite(bled,0);
break;
case 'p': analogWrite(rled,255);
analogWrite(gled,0);
analogWrite(bled,255);
break;
}
}
