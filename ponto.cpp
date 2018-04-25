#include <iostream>
#include <cmath>
#include "ponto.h"

using namespace std;

/*! \brief Construtor Padrão.
 *
 *
 * Construtor Padrão que define os valores das variáveis x e y como 0.

*/

Ponto::Ponto(){
  x=0;
  y=0;
}

/*! \brief Construtor com Argumentos.
 *
 *
 * Construtor com Argumentos que define os valores de acordo com o input do usuário.
*/

Ponto::Ponto(float _x, float _y){
    x = _x; y = _y;
}

/*! \brief Imprime o ponto na tela.
 *
 *
 * Usando o console, imprime o ponto na tela no formato (x,y).
*/

void Ponto::print(){
  cout << "(" << x << "," << y << ")" << endl;

}
/*! \brief Define o valor de X.
 *
 *
 * Pelo input do usuário, define o valor X do objeto Ponto.
*/
void Ponto::setX(float _x){
  x = _x;


}

/*! \brief Define o valor de Y.
 *
 *
 * Pelo input do usuário, define o valor Y do objeto Ponto.
*/

void Ponto::setY(float _y){
  y = _y;


}

/*! \brief Define os valores de X e Y.
 *
 *
 * Pelo input do usuário, define os valores X e Y do objeto Ponto.
*/

void Ponto:: setXY(float _x, float _y){
 x = _x;
 y = _y;
}

/*! \brief Retorna o valor de X
 *
 *
 * Função usada para obter o valor de X
*/

float Ponto:: getX(){
  return x;
}

/*! \brief Retorna o valor de Y
 *
 *
 * Função usada para obter o valor de Y
*/

float Ponto:: getY(){
  return y;
}

/*! \brief Soma dois pontos
 *
 *
 * Função usada para somar o valor de dois pontos, usando um ponto como input da função
*/

Ponto Ponto::add(Ponto _p){
  Ponto ret;
  ret.x = x + _p.x;
  ret.y = y + _p.y;

  return ret;
}

/*! \brief Subtrai dois pontos
 *
 *
 * Função usada para subtrair o valor de dois pontos, usando um ponto como argumento
*/

Ponto Ponto::sub(Ponto _p){
  Ponto ret;
  ret.x = x - _p.x;
  ret.y = y - _p.y;

  return ret;
}

/*! \brief Calcula a norma do ponto
 *
 *
 * Retorna a norma do ponto.
*/

double Ponto::norma(){

  return sqrt(x+y);
}

/*! \brief translada o ponto em +x e +y
 *
 *
 * Recebe dois valores como argumento e translada o ponto de acordo com eles
*/

Ponto Ponto::translada(float _x, float _y){
  Ponto ret;

  ret.x = x + _x;
  ret.y = y + _y;

  return ret;
}
