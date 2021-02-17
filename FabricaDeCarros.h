/*
  Archivo: FabricaDeCarros.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-16
  Fecha última modificación: 2020-12-17
  Versión: 0.1
  Licencia: GPL
*/

/**
  CLASE: FabricaDeCarros
  INTENCIÓN: esta clase fabrica carros de una marca concreta. Puede fabricar un carro con un motor de cierto cilindraje y un tipo de frenos.
  RELACIONES: 
  - conoce un carro
*/

#ifndef FABRICACARROS_H
#define FABRICACARROS_H

#include "Carro.h"
#include <string>
using namespace std;


class FabricaDeCarros
{
  protected:
  string marca;

  public:
  /**
   * Crea una fabrica de carros
   * @param marca de carros que va a fabricar
   */
  FabricaDeCarros(string marca);
  /**
   * No hace nada
   */
  virtual ~FabricaDeCarros();
  /**
   * Fabrica un carro
   * @param el volumen del motor en centímetros cúbicos
   * @param el tipo de frenos
   * @return retorna un carro ya fabricado, cediendo su propiedad
   */
  virtual Carro *fabricar(int volumenDelMotor, string tipoDeFrenos);
};

#else
class FabricaDeCarros; // Declaración adelantada (guarda de Ángel GB)
#endif
