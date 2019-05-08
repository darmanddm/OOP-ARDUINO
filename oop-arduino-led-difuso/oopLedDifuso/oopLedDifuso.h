#ifndef LedDifuso_h
#define LedDifuso_h
/* Incluye la librería Arduino para ejecutar sus instrucciones*/      
#include "Arduino.h" 
class LedDifuso{  
    /*================== Atributo de Objeto ==================*/
    int pinLedDifuso;     
    /*========================================================*/
    public:
        /*=================== CONSTRUCTOR ====================*/      
        LedDifuso(int _pinLedDifuso);            
        /*===================== METODOS ======================*/                
        void blinkFast();     
        /*====================================================*/
};
#endif

