//
// Created by Yonasz on 19.10.2021.
//
#include "matrixLib/lib.h"

int **addMatrix(int **a, int **b, int rows, int columns)
{
    int **w = new int *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new int[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
         w[i][j]=a[i][j]+b[i][j];

        }
    }
    return w;
}

double **addMatrix(double **a, double **b, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=a[i][j]+b[i][j];

        }
    }
    return w;
}

double** addMatrix(double** a, int** b, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=a[i][j]+b[i][j];

        }
    }
    return w;
}

double** addMatrix(int** a, double** b, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=a[i][j]+b[i][j];

        }
    }
    return w;
}

//////////////////////////////////////////////////////////////////////////

int **subtractMatrix(int **a, int **b, int rows, int columns)
{
    int **w = new int *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new int[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=a[i][j]-b[i][j];

        }
    }
    return w;
}

double **subtractMatrix(double **a, double **b, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=a[i][j]-b[i][j];

        }
    }
    return w;
}

double **subtractMatrix(int **a, double **b, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=a[i][j]-b[i][j];

        }
    }
    return w;
}

double **subtractMatrix(double **a, int **b, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=a[i][j]-b[i][j];

        }
    }
    return w;
}

////////////////////////////////////////////////////////////////////////////////

int **multiplyMatrix(int **a, int **b, int rows, int columns, int columns2)
{
    int **w = new int *[rows];
    for (int i=0; i<rows;++i)
    {
        w[i] = new int [columns2];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            w[i][j] = 0;
            for (int k = 0; k < columns; k++)
            {
                w[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return w;

}

double **multiplyMatrix(double **a, double **b, int rows, int columns, int columns2) {

    auto **w = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        w[i] = new double[columns2];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns2; j++) {
            w[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                w[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return w;
}

double **multiplyMatrix(int **a, double **b, int rows, int columns, int columns2)
{
    auto **w = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        w[i] = new double[columns2];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns2; j++) {
            w[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                w[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return w;
}

double **multiplyMatrix(double **a, int **b, int rows, int columns, int columns2)
{
    auto **w = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        w[i] = new double[columns2];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns2; j++) {
            w[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                w[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return w;
}

///////////////////////////////////////////////////////////////////////////////

int **multiplyByScalar(int **a, int rows, int columns, int scalar)
{
    int **w = new int *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new int[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=scalar*a[i][j];
        }
    }
    return w;

}

double **multiplyByScalar(double **a, int rows, int columns, double scalar)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=scalar*a[i][j];

        }
    }
    return w;
}

/////////////////////////////////////////////////////////////////////////////

int **transpozeMatrix(int **a, int rows, int columns)
{

    int **w = new int *[columns];

    for (int i = 0; i <columns ; ++i) {
        w[i] = new int[rows];
    }

    for(int i=0;i<rows;++i)
    {
        for(int j =0;j<columns;++j)
        {
            w[j][i]=a[i][j];
        }
    }
    return w;

}

double **transpozeMatrix(double **a, int rows, int columns)
{
    auto **w = new double *[columns];

    for (int i = 0; i <columns ; ++i) {
        w[i] = new double[rows];
    }

    for(int i=0;i<rows;++i)
    {
        for(int j =0;j<columns;++j)
        {
            w[j][i]=a[i][j];
        }
    }
    return w;
}

//////////////////////////////////////////////////////////////////////////

int **powerMatrix(int **a, int rows, int columns, unsigned degree)
{
    int **w = new int *[columns];

    for (int i = 0; i <columns ; ++i)
    {
        w[i] = new int[rows];
    }

    w=a;

    for(unsigned i=1;i<degree;++i)
    {
        w= multiplyMatrix(w,a,rows,columns,columns);
    }
    return w;
}

double **powerMatrix(double **a, int rows, int columns, unsigned degree)
{
    auto **w = new double *[columns];

    for (int i = 0; i <columns ; ++i)
    {
        w[i] = new double[rows];
    }

    w=a;

    for(unsigned i=1;i<degree;++i)
    {
        w= multiplyMatrix(w,a,rows,columns,columns);
    }
    return w;
}

///////////////////////////////////////////////////////////////////

int determinantMatrix(int **a, int rows, int columns)
{
    int determinant = 0;
    if(rows == 1)
    {
        return a[0][0];
    }
    if(rows == 2)
    {
        return (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
    }
    int **w = new int *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new int[columns];
    }
    int sign = 1;

    for(int i=0; i<columns; ++i)
    {
        int j=0;
        for(int k = 0; k<rows; k++)
        {
            for(int l = 0; l<columns; l++)
            {

                if (k != 0 && l !=i)
                {
                    w[i][j++] = a[k][l];
                    if(j == rows -1)
                    {
                        j=0;
                        i++;
                    }
                }
            }
        }
        determinant += sign* a[0][i] * determinantMatrix(w,rows-1,rows-1);
        sign = -sign;
    }
    return determinant;
}
double determinantMatrix(double **a, int rows, int columns)
{
    double determinant = 0;
    if(rows == 1)
    {
        return a[0][0];
    }
    if(rows == 2)
    {
        return (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
    }
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    double sign = 1.;

    for(int i=0; i<columns; ++i)
    {
        int j=0;
        for(int k = 0; k<rows; k++)
        {
            for(int l = 0; l<columns; l++)
            {

                if (k != 0 && l !=i)
                {
                    w[i][j++] = a[k][l];
                    if(j == rows -1)
                    {
                        j=0;
                        i++;
                    }
                }
            }
        }
        determinant += sign* a[0][i] * determinantMatrix(w,rows-1,rows-1);
        sign = -sign;
    }
    return determinant;
}

//////////////////////////////////////////////////////////////////////////////////////

bool matrixIsDiagonal(int **a, int rows, int columns)
{
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
        {
            if(i!=j && a[i][j]!=0)
                return false;
        }
    }
    return true;
}

bool matrixIsDiagonal(double **a, int rows, int columns)
{
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
        {
            if(i!=j && a[i][j]!=0)
                return false;
        }
    }
    return true;
}

////////////////////////////////////////////////////////////////////

void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swap(double &a, double &b)
{
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}

///////////////////////////////////////////////////////

void sortRow(int *a, int columns)
{
    for(int i=0;i<columns;++i)
    {
        for(int j=0;i<columns-i;j++)
        {
            if(a[j-1]>a[j])
            {
                swap(a[j-1],a[j]);
            }
        }
    }
}

void sortRow(double *a, int columns)
{
    for (int i = 0; i < columns; ++i) {
        for (int j = 0; i < columns - i; j++) {
            if (a[j - 1] > a[j]) {
                swap(a[j - 1], a[j]);
            }
        }
    }
}

//////////////////////////////////////////////////////////////

void sortRowsInMatrix(int **a, int rows, int columns)
{
    for(int i=0;i<rows;++i)
    {
        sortRow(a[i],columns);
    }
}

void sortRowsInMatrix(double **a, int rows, int columns)
{
    for(int i=0;i<rows;++i)
    {
        sortRow(a[i],columns);
    }
}
