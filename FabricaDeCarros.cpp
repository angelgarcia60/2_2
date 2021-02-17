/*
  Archivo: FabricaDeCarros.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-16
  Fecha última modificación: 2020-03-17
  Versión: 0.1
  Licencia: GPL
*/

#include "FabricaDeCarros.h"

FabricaDeCarros::FabricaDeCarros(string marca) : marca(marca)
{
}


FabricaDeCarros::~FabricaDeCarros()
{
  // No hace nada
}


Carro *FabricaDeCarros::fabricar(int volumenDelMotor, string tipoDeFrenos)
{
  return new Carro(marca, volumenDelMotor, tipoDeFrenos);  // Cede propiedad
}


