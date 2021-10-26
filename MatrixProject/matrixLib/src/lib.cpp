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
    int cellValue=0;
    int **w = new int *[rows];
    for (int i=0; i<rows;++i)
    {
        w[i] = new int [columns2];
    }

    return w;
    //UNFINISHED//
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







