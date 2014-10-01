#include "matrix.h"


Matrix::Matrix()
{
    m = NULL;
    rows = 0;
    cols = 0;
}

Matrix::Matrix(int rows, int cols)
{
    this->rows = rows;
    this->cols = cols;

    m = new float *[rows];

    for(int i = 0; i<rows; i++)
    {
        m[i] = new float[cols];
    }

}

Matrix::~Matrix()
{
    for(int i = 0; i<rows; i++)
    {
        delete[] m[i];
    }
    delete[] m;
}


int Matrix::getRows() const
{
    return rows;
}

void Matrix::setRows(int value)
{
    rows = value;
}

int Matrix::getCols() const
{
    return cols;
}

void Matrix::setCols(int value)
{
    cols = value;
}

void Matrix::initMatrix()
{
    m = new float*[rows];
    for(int i =0; i<rows; i++)
    {
        m[i] = new float[cols];
    }

}

void Matrix::setValue(int row, int cols, float value)
{
    m[row][cols]=value;

}

float Matrix::getValue(int row, int cols)
{
    return m[row][cols];
}

float **Matrix::getData()
{
    return m;
}

void Matrix::setData(int rows, int cols, float **value)
{

    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            m[i][j]=value[i][j];
        }
    }
}


void Matrix::showMatrix()
{
    cout<<"Rows: "<<rows<<", Cols: "<<cols<<endl;

    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

}



void Matrix::suma(const Matrix &a, const Matrix &b)
{
    this->cols = a.getCols();
    this->rows= a.getRows();

    for(int i = 0; i<this->rows; i++)
    {
        for(int j=0; j<this->cols; j++)
        {
            this->m[i][j]=a.m[i][j]+b.m[i][j];

        }

    }
}

Matrix &Matrix::suma(const Matrix &b) const
{
    Matrix *c = new Matrix(b.rows, b.cols);

    for(int i = 0; i<c->rows; i++)
    {
        for(int j = 0; j<c->cols; j++)
        {
            c->m[i][j] = this->m[i][j] + b.m[i][j];
        }
    }

    return *c;
}

void Matrix::resta(const Matrix &a, const Matrix &b)
{
    this->cols = a.getCols();
    this->rows= a.getRows();

    for(int i = 0; i<this->rows; i++)
    {
        for(int j=0; j<this->cols; j++)
        {
            this->m[i][j]=a.m[i][j]-b.m[i][j];

        }

    }

}

Matrix &Matrix::resta(const Matrix &b) const
{
    Matrix *c = new Matrix(b.rows, b.cols);

    for(int i = 0; i<c->rows; i++)
    {
        for(int j = 0; j<c->cols; j++)
        {
            c->m[i][j] = this->m[i][j] - b.m[i][j];
        }
    }

    return *c;

}

Matrix &Matrix::mult(const Matrix &a, const Matrix &b)
{

    Matrix *c = new Matrix(a.cols, b.rows);

    if(a.cols == b.rows)
    {


    for (int i = 0; i < c->rows; i++)
    {
        for (int j = 0; j < c->cols; j++)
        {
            for (int k = 0; k < c->cols; k++)
            {
                c->m[i][j] += a.m[i][k]*b.m[k][j];
            }
        }
    }
    }
    else{

        cout<<"No se puede multiplicar"<<endl;
    }
    return *c;
}


Matrix &Matrix::scalar(const Matrix &a, int scalar) const
{
    Matrix *c = new Matrix(a.rows, a.cols);

    for(int i = 0; i<c->rows; i++)
    {
        for(int j = 0; j<c->cols; j++)
        {
            c->m[i][j] = a.m[i][j]*scalar;
        }
    }

    return *c;


}

void Matrix::transpose(const Matrix a)
{
    for(int i = 0; i<this->rows; i++)
    {
        for(int j=0; j<this->cols; j++)
        {
            this->m[j][i]=a.m[i][j];

        }
    }
}

Matrix &Matrix::transpose() const
{
     Matrix *c = new Matrix(this->cols, this->rows);

     for(int i = 0; i<c->cols; i++)
     {
         for(int j=0; j<c->rows; j++)
         {
             c->m[j][i]=this->m[i][j];

         }
     }

     return *c;
}






