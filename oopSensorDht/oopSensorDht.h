/*************************************************************
*                 SCALABLE CODE FOR ARDUINO                  * 
*       Object-oriented programming with Arduino IDE         *
*              Tested on FireBeetle Board-ESP32              *
*                                                            *
* Created by:                                                *
*           Diego Armando Dorado                             *
*           Information Systems Analyst                      *
* Know more in:                                              *
*           https://github.com/darmanddm                     *
*           https://armandosistemas.com/                     *
* Description:                                               *
*           Creation of the Dht22 sensor object              *
* Observation:                                               *
*           In the .h file goes the description Dht22        *
*           sensor object.                                   *
*************************************************************/
#ifndef SensorDht_h
#define SensorDht_h
/*============================================================
  Library:
    Includes the arduino library to execute its instructions
============================================================*/
#include "Arduino.h" 
#include <DHT.h>
class Dht{  
	/*================= Object attribute ===================*/
	/*========================================================
    	Observation:      
		Declares a variable of type object making use of
		the DHT.h library. In this variable the parameters
		of the constructor will be saved.
    ========================================================*/
	DHT dht; 
	/*============== Variables for Methods =================*/
    int humidity;
    int temperature;           
    public:
    	/*=================== CONSTRUCTOR===================*/
    	/*====================================================
            The _pinSensor and _sensorType parameter is
            defined in the arduino file.Here the constructor 
            receives the parameter to be able to create the
            Dht sensor object.
        ====================================================*/
        Dht(int _pinSensor, uint8_t _sensorType);  
        /*===================== METHODS ====================*/        
        /*====================================================
            Methods without input parameters
        ====================================================*/         
        void captureTemperature();
        void captureHumidity();
        void showTemperature();
        void showHumidity();    
};
#endif