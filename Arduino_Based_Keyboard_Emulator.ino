/*
 * Arduino Based Keyboard Emulator
 *
 * 
 * by Niyas Thalappil
 * 
 * www.youtube.com/c/NiyasThalappil
 * NiyazThalappil@gmail.com
 *
 */

#include <Keyboard.h> 
void setup() {
pinMode(3,INPUT_PULLUP);
pinMode(4,INPUT_PULLUP);
pinMode(5,INPUT_PULLUP);
Serial.begin(9600);
}
void loop() {

 Keyboard.begin();        
 if (digitalRead(3) == 0)  
  {
    Keyboard.write('A');  
    delay(200);           
  }
  else if (digitalRead(4) == 0){ 
    Keyboard.print("The rain in Spain falls mainly on the plain");
    delay(200);
}
  else if (digitalRead(5) == 0){  
    Keyboard.write(0xB0);        
    delay(200);
  }
  Keyboard.end();                
}
