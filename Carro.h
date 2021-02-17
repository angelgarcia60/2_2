/*
  Archivo: Carro.h
  Autor: Ángel García Baños <angel.garcia@correounivalle.edu.co>
  Fecha creación: 2019-07-16
  Fecha última modificación: 2020-12-17
  Versión: 0.1
  Licencia: GPL
*/

/**
  CLASE: Carro
  INTENCIÓN: el carro tiene una marca, un volumen del motor, un tipo de frenos (NORMAL o ABS), la distancia total recorrida (cuentakilómetros) y la última velocidad que llevaba antes de frenar. Además:
  - se puede conducir el carro a una cierta velocidad durante un cierto número de kilómetros
  - se puede frenar. La distancia de frenado depende de la velocidad que lleve y del tipo de frenos (con los ABS se frena más rápido).
  RELACIONES: ninguna
*/

#ifndef CARRO_H
#define CARRO_H

#include <string>
using namespace std;


class Carro
{
  protected:
  string marca;
  int volumenDelMotor;
  string tipoDeFrenos;
  double distanciaRecorrida;
  double ultimaVelocidad;

  public:
  /**
   * Construye un carro con unas ciertas características
   * @param la marca del carro
   * @param el volumen del motor en centímetros cúbicos
   * @param el tipo de frenos
   */
  Carro(string marca, int volumenDelMotor, string tipoDeFrenos);
  /**
   * No hace nada
   */
  virtual ~Carro();
  /**
   * Conduce el carro durante un cierto tiempo a una cierta velocidad
   * @param el tiempo en minutos
   * @param la velocidad en km/h
   */
  virtual void conducir(double tiempo, double velocidad);
  /**
   * Frena el carro. Ello implica que va a recorrer una distancia adicional, que depende de la velocidad que lleve.
   Con frenos normales equivale a otros 10 segundos de recorrido. Con frenos ABS equivale a 2 segundos de recorrido.
   */
  virtual void frenar();
  /**
   * Muestra la distancia recorrida
   * @return la distancia recorrida
   */
  virtual double cuentaKilometros();
};

#else
class Carro; // Declaración adelantada (guarda de Ángel GB)
#endif
