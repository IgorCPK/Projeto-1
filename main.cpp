#include <iostream>
#include "ponto.h"
#include "poligono.h"
using namespace std;

int main(){
Ponto B(0,0), C(0,2), D(2,2), E(2,0);
Poligono A;

A.AddVert(B);
A.AddVert(C);
A.AddVert(D);
A.AddVert(E);

A.print();

cout << endl;

cout << A.Area();

cout << endl;

A.translada(1,1);

A.print();

cout << endl;


cout << A.Area();

  return 0;
}
