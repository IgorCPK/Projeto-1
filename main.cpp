#include <iostream>
#include "ponto.h"
#include "poligono.h"
#include "retangulo.h"
using namespace std;

int main(){
//Ponto B(0,0), C(0,2), D(2,2), E(2,0);
//Poligono A;
Retangulo ret(0,0,4,3);
cout << "area do ret: "<< ret.Area() << endl;
ret.print();
cout<<endl;
//ret.translada(-3,4);
//cout << "area do ret: "<< ret.Area() << endl;
//ret.print();
ret.rotacao(90,0,0);
cout << "area do ret: "<< ret.Area() << endl;
ret.print();

//A.AddVert(B);
//A.AddVert(C);
//A.AddVert(D);
//A.AddVert(E);

//A.print();

//cout << endl;

//cout << A.Area();

//cout << endl;

//A.translada(1,1);

//A.print();

//cout << A.Area();

//cout << endl;


//cout << A.Area();

//cout<<endl;

  return 0;
}
