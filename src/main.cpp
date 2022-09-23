#include <Arduino.h>

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
  Serial.println("Digitized Value of " + String(iVal) + " is equivalent to an Temperature = " + String(analogTemperture) + "°C");
  if(analogTemperture < 10){
    Serial.println("Cold!");
  }else if(analogTemperture < 15){
    Serial.println("Cool");
  }else if(analogTemperture < 25){
    Serial.println("Perfect");
  }else if(analogTemperture < 30){
    Serial.println("Warm");
  }else if(analogTemperture < 35){
    Serial.println("Hot");
  }else{
    Serial.println("Too Hot!");
  }

  delay(2000);
}