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
*           Creation of the Led object                       *
* Observation:                                               *
*           In the .ino file goes the business logic of      *
*           the system or the general deployment of the      *           
*           application.                                     *
*************************************************************/
/*============================================================
  Library:
  The file where the object was created is included.
============================================================*/
#include <oopLedDifuso.h>
/* Attributes of the Led object:          ==================*/
const int _pinLedDifuso = 13;
/* The Led object is instantiated:        ==================*/  
LedDifuso LedDifuso(_pinLedDifuso); 
/*==========================================================*/
void setup() {  
  pinMode(_pinLedDifuso , OUTPUT);  
  /* The Led object accesses the methods  ==================*/  
}
void loop() {
  /* The Led object accesses the method   ==================*/  
  LedDifuso.blinkFast();
}
