
const int control = 3 ;
void setup(){    
    pinMode(control,  OUTPUT) ;
 
  }

void loop()
    {
        for ( int n = 0 ; n < 255 ; n++)
           {
               analogWrite (control,  n) ;
               delay(15) ;
           }
    }
