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
*           Creation of the Dht sensor object                       *
* Observation:                                               *
*           In the .ino file goes the business logic of      *
*           the system or the general deployment of the      *           
*           application.                                     *
*************************************************************/
/*============================================================
  Library:
  The file where the object was created is included.
============================================================*/
#include <oopSensorDht.h>
/* Attributes of the Led object:          ==================*/
uint8_t _sensorType = DHT22;   
int _pinSensor = 3;
/* The Dht sensor object is instantiated: ==================*/
Dht Dht(_pinSensor,_sensorType); 
/*==========================================================*/
void setup() {  
  Serial.begin(9600); 
}
void loop() {
  /*==========================================================
  Se llaman los métodos del archivo .cpp para dar accion al
  objeto creado en el archivo .h 
  ==========================================================*/
  Dht.captureTemperature();
  Dht.captureHumidity();  
  Dht.showTemperature();
  Dht.showHumidity();  
}
