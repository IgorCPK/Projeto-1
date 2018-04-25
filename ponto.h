#ifndef PONTO_H
#define PONTO_H


class Ponto
{
private:
  float x,y;

public:
//Construtor Padrão
  Ponto();
// Construtor com argumentos
  Ponto(float _x, float _y);
// Função Print
  void print();
// Métodos para colocar os valores sem construtor
  void setX(float _x);
  void setY(float _y);
  void setXY(float _x, float _y);
// Métodos para recuperar os valores de X e Y
  float getX();
  float getY();
// Métodos de adição e subtração
  Ponto add(Ponto _p);
  Ponto sub(Ponto _p);
// Norma
double norma();
// Translação
Ponto translada(float _x, float _y);

};

#endif // PONTO_H
