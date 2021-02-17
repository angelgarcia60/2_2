/*
  Archivo: Carro.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-16
  Fecha última modificación: 2019-07-16
  Versión: 0.1
  Licencia: GPL
*/

#include "Carro.h"


Carro::Carro(string marca, int volumenDelMotor, string tipoDeFrenos)
  : marca(marca), volumenDelMotor(volumenDelMotor), tipoDeFrenos(tipoDeFrenos)
{
  distanciaRecorrida = 0;
  ultimaVelocidad = 0;
}


Carro::~Carro()
{
  // No hace nada
}


void Carro::conducir(double tiempo, double velocidad)
{
  distanciaRecorrida += velocidad * (tiempo / 60);
  ultimaVelocidad = velocidad;
}


void Carro::frenar()
{
  if(tipoDeFrenos == "NORMAL")
    distanciaRecorrida += ultimaVelocidad * 10.0 / (60*60);
  if(tipoDeFrenos == "ABS")
    distanciaRecorrida += ultimaVelocidad * 2.0 / (60*60);
}


double Carro::cuentaKilometros()
{
  return distanciaRecorrida;
}


