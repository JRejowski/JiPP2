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
    double **w = new double *[rows];

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
    double **w = new double *[rows];

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

    double **w = new double *[rows];
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
    double **w = new double *[rows];

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
    double **w = new double *[columns];

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

int **powerMatrix(int **a, int rows, int columns, unsigned degree)
{
    int **w = new int *[columns];

    for (int i = 0; i <columns ; ++i)
    {
        w[i] = new int[rows];
    }

    w=a;

    for(int i=1;i<degree;++i)
    {
        w= multiplyMatrix(w,a,rows,columns,columns);
    }
    return w;
}

double **powerMatrix(double **a, int rows, int columns, unsigned degree)
{
    double **w = new double *[columns];

    for (int i = 0; i <columns ; ++i)
    {
        w[i] = new double[rows];
    }

    w=a;

    for(int i=1;i<degree;++i)
    {
        w= multiplyMatrix(w,a,rows,columns,columns);
    }
    return w;
}


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







