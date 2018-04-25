#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"

class Poligono
{
private:
  int cont = 0;
  Ponto N[100];


public:
  Poligono();
  int Contador();
  int vertices();
  void AddVert(Ponto _x);
  void print();
  float Area();
  void translada(float _a, float _b);
  void rotacao(float teta, float x0,float y0);
};

#endif // POLIGONO_H
