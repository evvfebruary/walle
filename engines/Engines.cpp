#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif 
#include "Engines.h"
#include "HardwareSerial.h"

Engines::Engines(int lm, int lmr, int rm, int rmr)
{
  leftMotor = lm;
  leftMotorReverse = lmr;
  rightMotor = rm;
  rightMotorReverse = rmr;
}

void Engines::move_forward(void)
{
  digitalWrite(leftMotor,LOW);
  digitalWrite(leftMotorReverse,HIGH);
  digitalWrite(rightMotor,HIGH);
  digitalWrite(rightMotorReverse,LOW); 
}

void Engines::move_back(void)
{
  digitalWrite(leftMotor,HIGH);
  digitalWrite(leftMotorReverse,LOW);
  digitalWrite(rightMotor,LOW);
  digitalWrite(rightMotorReverse,HIGH);
}

void Engines::move_left(void)
{
  digitalWrite(leftMotor,LOW);
  digitalWrite(leftMotorReverse,HIGH);
  digitalWrite(rightMotor,HIGH);
  digitalWrite(rightMotorReverse,HIGH);
}

void Engines::move_right(void)
{
  digitalWrite(leftMotor,HIGH);
  digitalWrite(leftMotorReverse,HIGH);
  digitalWrite(rightMotor,HIGH);
  digitalWrite(rightMotorReverse,LOW);
}

void Engines::stop(void)
{
  digitalWrite(leftMotor,HIGH);
  digitalWrite(leftMotorReverse,HIGH);
  digitalWrite(rightMotor,HIGH);
  digitalWrite(rightMotorReverse,HIGH);
}




