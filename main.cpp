/*
  Archivo: main.cpp
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-16
  Fecha última modificación: 2020-03-17
  Versión: 0.1
  Licencia: GPL
*/

/**
  Utilidad para la asignatura: uso de objetos dinámicos (manejo dinámico de memoria) con los operadores new y delete
  
  HISTORIA: Tenemos una fábrica de carros que produce objetos de clase Carro.
  La fábrica Renaul me fabrica un carro de 1440 centímetros cúbicos y que tiene frenos ABS. Salgo con el carro a conducir durante 5 minutos a 80 km/h. Luego freno. ¿Cuantos km recorrió el carro?
  
*/

#include"FabricaDeCarros.h"
#include <iostream>
using namespace std;


int main() 
{
  Carro *carro = nullptr;
  
  {
    FabricaDeCarros renault("Renault");

    carro = renault.fabricar(1400, "ABS");  // centímetros cúbicos de motor y tipo de frenos
  }  // Aquí se destruye la renault, pero no el carro

  carro->conducir(5, 80); // tiempo (minutos) y velocidad (km/hora)
  carro->frenar();
  cout << "El carro se movió " << carro->cuentaKilometros() << "km" << endl;
  
  delete carro;  // Destruye el carro
  carro = nullptr;     // Es una buena práctica, para evitar usar objetos que ya no son válidos

  return 0;
}

