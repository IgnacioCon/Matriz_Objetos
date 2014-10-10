#include <iostream>
#include <fstream>
#include "matrix.h"

#define M 3
#define N 3

using namespace std;

int main()
{

    Matrix a,b, c, d, e;
/*
    a.setValue(0,0, 3);
    a.setValue(0,1, 3);
    a.setValue(0,2, 5);
    a.setValue(1,0, 3);
    a.setValue(1,1, 3);
    a.setValue(1,2, 1);
    a.setValue(2,0, 1);
    a.setValue(2,1, 1);
    a.setValue(2,2, 1);

    b.setValue(0,0, 1);
    b.setValue(0,1, 2);
    b.setValue(0,2, 4);
    b.setValue(1,0, 8);
    b.setValue(1,1, 3);
    b.setValue(1,2, 2);
    b.setValue(2,0, 1);
    b.setValue(2,1, 1);
    b.setValue(2,2, 1);
*/

    a.ingresarDatos("MatrizA.txt");
    b.ingresarDatos("MatrizB.txt");
    a.showMatrix();
    c = a+b;
    d = a-b;
    e = a*b;

    c.guardarDatos("MatrizRes.txt");
 //c.showMatrix();
 //d.showMatrix();


    cout<<"Matriz C: Suma "<<"\n"<<c<<"\n";

    cout<<"Matriz D: Resta"<<"\n"<<d<<"\n";

    cout<<"Matriz E: Multiplicacion"<<"\n"<<e<<"\n";


    return 0;
}


