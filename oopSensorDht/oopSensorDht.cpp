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
/*============================================================
  Library:
	The file where the object was created is included.
============================================================*/
#include <oopSensorDht.h>
/*====================== CONSTRUCTOR========================*/
/*============================================================			
	The attributes of the class are initialized. 
	The parameters received from arduino are assigned to a
	variable of type object of class Dht. In this way the 
	sensor is initialized.
============================================================*/
Dht::Dht(int _pinSensor, uint8_t _sensorType)
	: dht(_pinSensor, _sensorType) {}
/*======================== METHODS =========================*/        
/*============================================================
  	Gives action to the object.
	Method captureTemperature:		
	In this case, the action is capture Temperature
============================================================*/
void Dht::captureTemperature()
{
	dht.begin();		  
	delay(2000);     
    temperature = dht.readTemperature();       
}
/*============================================================
  	Gives action to the object.
	Method captureHumidity:		
	In this case, the action is capture Humidity
============================================================*/
void Dht::captureHumidity()
{
	dht.begin();		  
	delay(2000);
    humidity = dht.readHumidity();                
}
/*============================================================
  	Gives action to the object.
	Method showTemperature:		
	In this case, the action is show Temperature
============================================================*/
void Dht::showTemperature()
{        
    Serial.print("Temperature: ");
    Serial.println(temperature);
}
/*============================================================
  	Gives action to the object.
	Method show Humidity:		
	In this case, the action is show Humidity
============================================================*/
void Dht::showHumidity()
{             
    Serial.print("Humidity: ");
    Serial.println(humidity);
}
