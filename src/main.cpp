#include <Arduino.h>

/**
 * StAuth10184: I Jiawei Zhang, 000730840 certify that this material is my original work.
 * No other person's work has been used without due acknowledgement. 
 */

void setup() {
  Serial.begin(115200);

}

void loop() {
  int iVal;
  // read digitized value from the D1 Mini's A/D convertor
  iVal = analogRead(A0);


  // in class lab
  // double analogVoltage;
  // analogVoltage = iVal / 1024.00 * 3.3;
  // Serial.println("Digitized Value of " + String(iVal) + " is equivalent to an Analog Voltage = " + String(analogVoltage) + "V");
  // // wait 0.5 seconds (500 ms)
  // delay(500);


  // Let’s imagine that the variable resistor represents a temperature sensor such that a 0-50°C will be converted to a 0-3.3V analog output signal.
  double analogTemperture;
  analogTemperture = iVal / 50.00 * 3.3;
  
  if(analogTemperture < 10){
    Serial.println("Digitized Value of " + String(iVal) + " is equivalent to a Temperature input of " + String(analogTemperture) + "deg. C which is Cold!");
  }else if(analogTemperture < 15){
    Serial.println("Digitized Value of " + String(iVal) + " is equivalent to a Temperature input of " + String(analogTemperture) + "deg. C which is Cool");
  }else if(analogTemperture < 25){
    Serial.println("Digitized Value of " + String(iVal) + " is equivalent to a Temperature input of " + String(analogTemperture) + "deg. C which is Perfect");
  }else if(analogTemperture < 30){
    Serial.println("Digitized Value of " + String(iVal) + " is equivalent to a Temperature input of " + String(analogTemperture) + "deg. C which is Warm");
  }else if(analogTemperture < 35){
    Serial.println("Digitized Value of " + String(iVal) + " is equivalent to a Temperature input of " + String(analogTemperture) + "deg. C which is Hot");
  }else{
    Serial.println("Digitized Value of " + String(iVal) + " is equivalent to a Temperature input of " + String(analogTemperture) + "deg. C which is Too Hot!");
  }

  delay(2000);
}