#include "ShiftRegister595.h"

//<<constructor>>
ShiftRegister595::ShiftRegister595( byte userLatchPin, byte userClockPin, byte userDataPin ){
  latchPin	= userLatchPin;
  clockPin	= userClockPin;
  dataPin	= userDataPin;
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT); 
  bufferByte = 0;
}

void ShiftRegister595::buffer(byte out){
  bufferByte = out;
}

void ShiftRegister595::write(){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, bufferByte);   
  digitalWrite(latchPin, HIGH);
}

void ShiftRegister595::write(byte out){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, out);   
  digitalWrite(latchPin, HIGH);
}


