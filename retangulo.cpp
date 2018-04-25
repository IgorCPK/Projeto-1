#include <iostream>
#include "poligono.h"
#include "ponto.h"
#include "retangulo.h"

using namespace std;

/*! \brief Construtor da classe Retângulo.
 *
 *
 *  Construtor com argumentos que utiliza as funções da classe Polígono para definir o retângulo a partir dos dados fornecidos.
 */
Retangulo::Retangulo(float x, float y, float _largura, float _altura){
    largura=_largura;
    altura=_altura;
    Ponto aux1(x,y),aux2(x+largura,y),aux3(x,y-altura),aux4(x+largura,y-altura);
    AddVert(aux1);
    AddVert(aux2);
    AddVert(aux4);
    AddVert(aux3);

}
