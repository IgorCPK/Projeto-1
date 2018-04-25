#ifndef RETANGULO_H
#define RETANGULO_H
#include "ponto.h"
#include "poligono.h"

class Retangulo : public Poligono
{
private:
    float largura, altura;

public:
    Retangulo(float x, float y, float _largura, float _altura);

};


#endif // RETANGULO_H
