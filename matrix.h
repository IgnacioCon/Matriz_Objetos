#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

using namespace std;
class Matrix
{
private:

    int rows;
    int cols;
    float **m;

public:
    Matrix();
    Matrix(int rows, int cols);
    ~Matrix();

    int getRows() const;
    void setRows(int value);
    int getCols() const;
    void setCols(int value);

    void initMatrix();

    void setValue(int row, int cols, float value);
    float getValue(int row, int cols);

    float **getData();
    void setData(int rows, int cols,float **value);
    void showMatrix(); //para uno ver si esta ve, no recomendable para produccion


    void suma(const Matrix &a, const Matrix &b);
    Matrix &suma(const Matrix &b) const;

    void resta(const Matrix &a, const Matrix &b);
    Matrix &resta(const Matrix &b) const;

    Matrix &mult(const Matrix &a, const Matrix &b);


    void scalar(int scalar);
    Matrix &scalar(const Matrix &a, int scalar) const;


    void transpose(const Matrix a);
    Matrix &transpose() const;

};

#endif // MATRIX_H
