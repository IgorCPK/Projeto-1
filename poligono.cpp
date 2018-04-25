#include <iostream>
#include <cmath>
#include "poligono.h"
#include "ponto.h"

#define PI 3.14159265

using namespace std;

Poligono::Poligono(){}

/*! \brief Retorna o numero de vertices
 *
 *
 * Retorna o valor do contador de vertices

*/

int Poligono::vertices(){

  return cont;
}

/*! \brief Um contador básico
 *
 *
 * Contador utilizado para contar o numero de vertices

*/

int Poligono::Contador(){
    cont++;

    return cont;
}

/*! \brief Adiciona vertice.
 *
 *
 * A função adiciona adiciona um vertice no ponto dado como argumento, e soma +1 no contador.

*/

void Poligono::AddVert(Ponto _x){
      N[cont].setXY(_x.getX(),_x.getY());

 Contador();
}

/*! \brief Imprime os pontos dos vertices
 *
 *
 * Imprime cada um dos vertices do poligono no formato (x,y)->(a,b).

*/

void Poligono::print(){
  int i;

  for(i = 0; i < cont; i++){
      if(i < cont){
      cout << "(" << N[i].getX() << "," << N[i].getY() << ")" << "->";
      }
      if(i == cont){
          cout << "(" << N[i].getX() << "," << N[i].getY() << ")";
      }

    }

}

/*! \brief Retorna a area do poligono
 *
 *
 * Retorna a area do poligono usando somas e subtracoes.

*/

float Poligono::Area(){
  float soma1 = 0, soma2 = 0;
  int i = 0;

  for(i = 0; i+1 < cont; i++){
      soma1 = soma1 + N[i].getX() * N[i+1].getY();
      soma2 = soma2 + N[i].getY() * N[i+1].getX();
    }
    soma1 = soma1 + N[cont-1].getX() * N[0].getY();
    soma2 = soma2 + N[cont-1].getY() * N[0].getX();
    return (soma2 - soma1)/2;
}

/*! \brief translada o poligono de +a e +b.
 *
 *
 * Soma os argumentos _a e _b nos valores do poligono, alterando sua localizacao

*/

void Poligono::translada(float _a, float _b){
 int i;
  for(i = 0; i < cont; i++){
    N[i].setXY(N[i].getX() + _a, N[i].getY() + _b);
    }


}

/*! \brief rotaciona o poligono
 *
 *
 * rotaciona o poligono de um angulo dado como argumento.

*/

void Poligono::rotacao(float teta, float x0, float y0){
    for(int i = 0;i<cont;i++){
        N[i].setXY((N[i].getX()-x0)*cos(teta*PI/180.0)-(N[i].getY()-y0)*sin(teta*PI/180.0),(N[i].getX()-x0)*sin(teta*PI/180.0)+(N[i].getY()-y0)*cos(teta*PI/180.0));
	}
}
