
/*=== The file where the object was created is included ===*/
#include <oopLedDifuso.h>
/*====================== CONSTRUCTOR========================*/
LedDifuso::LedDifuso(int _pinLedDifuso){  
	pinLedDifuso = _pinLedDifuso;
}
/*======================== METHODS =========================*/        
void LedDifuso::blinkFast()
{		
	digitalWrite(pinLedDifuso, HIGH);
	delay(100);
	digitalWrite(pinLedDifuso, LOW); 
	delay(100);	
}
