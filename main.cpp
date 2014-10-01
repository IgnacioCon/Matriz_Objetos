#include <iostream>
#include "matrix.h"

#define M 3
#define N 3

using namespace std;

int main()
{
    Matrix a(M,N);
    Matrix b(M,N);
    Matrix c;

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

    a.showMatrix();
    b.showMatrix();

   c = c.mult(a,b);
   c.showMatrix();

    return 0;
}

http://git-scm.com/downloads
