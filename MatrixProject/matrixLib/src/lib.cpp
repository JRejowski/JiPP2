//
// Created by Yonasz on 19.10.2021.
//

#include <iostream>
#include "matrixLib/lib.h"

using namespace std;

void help() {
    cout << "Possible actions: " << endl;
    cout << "1)addMatrix\n/**\n"
            " * Adds two martices together\n"
            " * !Important! Matrices must be same size!\n"
            " * @param matrix1 first matrix\n"
            " * @param matrix2 second matrix\n"
            " * @param rows number of rows in matrices\n"
            " * @param columns number of columns in matrices\n"
            " */" << endl;
    cout << "2)subtractMatrix\n/**\n"
            " * Subtract one matrix(matrix2) from another matrix(matrix1)\n"
            " * !Important! Matrices must be same size!\n"
            " * @param matrix1 first matrix\n"
            " * @param matrix2 second matrix\n"
            " * @param rows number of rows in matrices\n"
            " * @param columns  number of columns in matrices\n"
            " */" << endl;
    cout << "3)multiplyMatrix\n/**\n"
            " * Multiply first matrix by second matrix\n"
            " * !Important! Number of rows in first matrix must be equal to second matrix's columns number\n"
            " * @param matrix1 first matrix\n"
            " * @param matrix2 second matrix\n"
            " * @param rows number of rows in first matrix\n"
            " * @param columns number of columns in first matrix\n"
            " * @param columns2 number of columns in second matrix\n"
            " */" << endl;
    cout << "4)multiplyByScalar\n/**\n"
            " * Multiply matrix by a scalar\n"
            " * @param matrix given matrix\n"
            " * @param rows number of rows in matrix\n"
            " * @param columns number of columns in matrix\n"
            " * @param scalar value of a scalar by which the matrix will be multiplied\n"
            " */" << endl;
    cout << "5)transpozeMatrix\n/**\n"
            " * Transpozing of given matrix\n"
            " * @param matrix given matrix\n"
            " * @param rows number of matrix's rows\n"
            " * @param columns number of matrix's columns\n"
            " */" << endl;
    cout << "6)powerMatrix\n/**\n"
            " * Powers the given matrix to given degree\n"
            " * @param matrix given matrix\n"
            " * @param rows number of matrix's rows\n"
            " * @param columns number of matrix's columns\n"
            " * @param degree degree to which the matrix will be powered\n"
            " */" << endl;
    cout << "7)determinantMatrix\n/**\n"
            " * Calculates the determinant of given matrix\n"
            " * !Important! Numbers of rows and columns in matrix must be equal!\n"
            " * @param matrix given matrix\n"
            " * @param rows number of rows in matrix\n"
            " * @param columns number of columns in matrix\n"
            " */"<<endl;
    cout<< "8)matrixIsDiagonal\n/**\n"
           " * Checks whether the matrix is Diagonal or not\n"
           " * @param matrix given matrix\n"
           " * @param rows number of rows in matrix\n"
           " * @param columns number of columns in matrix\n"
           " */"<<endl;
    cout<<"9)sortRowsInMatrix\n/**\n"
          " * Sort each row in a matrix using bubble sort\n"
          " * @param matrix given matrix \n"
          " * @param rows number of rows in matrix\n"
          " * @param columns number of columns in matrix\n"
          " */"<<endl;
    cout<<"10)help\n/**\n"
          " * Lists all of possible actions (show documentation)\n"
          " */"<<endl;
    cout<<"If you want your program to run properly you need to give two starting values (function help is an exception - you need only one parameter then)\n"
          "first one is the name of function, second indicates the type of data you are going to be using (int or double)\n"
          "Example: you want to use function addMatrix, you write: addMatrix int as your starting values\n"<<endl;
}


void printMatrix(int **matrix, int rows, int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
     {
           cout<<matrix[i][j]<<"  ";
     }
        cout<<endl;
    }
}
void printMatrix(double **matrix, int rows, int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void deleteMatrix(int **matrix, int rows)
{
    for(int i=0;i<rows;++i)
    {
        delete[] matrix[i];
    }

}
void deleteMatrix(double **matrix, int rows)
{
    for(int i=0;i<rows;++i)
    {
        delete[] matrix[i];
    }
}


int **addMatrix(int **matrix1, int **matrix2, int rows, int columns)
{
    int **w = new int *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new int[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
         w[i][j]=matrix1[i][j]+matrix2[i][j];

        }
    }
    return w;
}

double **addMatrix(double **matrix1, double **matrix2, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=matrix1[i][j]+matrix2[i][j];

        }
    }
    return w;
}

double** addMatrix(double** matrix1, int** matrix2, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=matrix1[i][j]+matrix2[i][j];

        }
    }
    return w;
}

double** addMatrix(int** matrix1, double** matrix2, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=matrix1[i][j]+matrix2[i][j];

        }
    }
    return w;
}

//////////////////////////////////////////////////////////////////////////

int **subtractMatrix(int **matrix1, int **matrix2, int rows, int columns)
{
    int **w = new int *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new int[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=matrix1[i][j]-matrix2[i][j];

        }
    }
    return w;
}

double **subtractMatrix(double **matrix1, double **matrix2, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=matrix1[i][j]-matrix2[i][j];

        }
    }
    return w;
}

double **subtractMatrix(int **matrix1, double **matrix2, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=matrix1[i][j]-matrix2[i][j];

        }
    }
    return w;
}

double **subtractMatrix(double **matrix1, int **matrix2, int rows, int columns)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=matrix1[i][j]-matrix2[i][j];

        }
    }
    return w;
}

////////////////////////////////////////////////////////////////////////////////

int **multiplyMatrix(int **matrix1, int **matrix2, int rows, int columns, int columns2)
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
                w[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return w;
}

double **multiplyMatrix(double **matrix1, double **matrix2, int rows, int columns, int columns2) {

    auto **w = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        w[i] = new double[columns2];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns2; j++) {
            w[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                w[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return w;
}

double **multiplyMatrix(int **matrix1, double **matrix2, int rows, int columns, int columns2)
{
    auto **w = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        w[i] = new double[columns2];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns2; j++) {
            w[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                w[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return w;
}

double **multiplyMatrix(double **matrix1, int **matrix2, int rows, int columns, int columns2)
{
    auto **w = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        w[i] = new double[columns2];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns2; j++) {
            w[i][j] = 0;
            for (int k = 0; k < columns; k++) {
                w[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return w;
}

///////////////////////////////////////////////////////////////////////////////

int **multiplyByScalar(int **matrix, int rows, int columns, int scalar)
{
    int **w = new int *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new int[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=scalar*matrix[i][j];
        }
    }
    return w;

}

double **multiplyByScalar(double **matrix, int rows, int columns, double scalar)
{
    auto **w = new double *[rows];

    for (int i = 0; i <rows ; ++i) {
        w[i] = new double[columns];
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            w[i][j]=scalar*matrix[i][j];

        }
    }
    return w;
}

/////////////////////////////////////////////////////////////////////////////

int **transpozeMatrix(int **matrix, int rows, int columns)
{

    int **w = new int *[columns];

    for (int i = 0; i <columns ; ++i) {
        w[i] = new int[rows];
    }

    for(int i=0;i<rows;++i)
    {
        for(int j =0;j<columns;++j)
        {
            w[j][i]=matrix[i][j];
        }
    }
    return w;

}

double **transpozeMatrix(double **matrix, int rows, int columns)
{
    auto **w = new double *[columns];

    for (int i = 0; i <columns ; ++i) {
        w[i] = new double[rows];
    }

    for(int i=0;i<rows;++i)
    {
        for(int j =0;j<columns;++j)
        {
            w[j][i]=matrix[i][j];
        }
    }
    return w;
}

//////////////////////////////////////////////////////////////////////////

int **powerMatrix(int **matrix, int rows, int columns, unsigned degree)
{
    int **w = new int *[columns];

    for (int i = 0; i <columns ; ++i)
    {
        w[i] = new int[rows];
    }

    w=matrix;

    for(unsigned i=1;i<degree;++i)
    {
        w= multiplyMatrix(w,matrix,rows,columns,columns);
    }
    return w;
}

double **powerMatrix(double **matrix, int rows, int columns, unsigned degree)
{
    auto **w = new double *[columns];

    for (int i = 0; i <columns ; ++i)
    {
        w[i] = new double[rows];
    }

    w=matrix;

    for(unsigned i=1;i<degree;++i)
    {
        w= multiplyMatrix(w,matrix,rows,columns,columns);
    }
    return w;
}

///////////////////////////////////////////////////////////////////

int determinantMatrix(int** matrix, int rows, int columns)
{

    if(rows==1)
    {
        return matrix[0][0];
    }
    int determinant=0;
    auto** w = new int*[rows-1];

    for(int i=0; i<rows; ++i)
    {
        int sign =0;
        for(int j=0;j<rows-1;++j)
        {
            w[j]= new int[columns-1];
            for(int k=0;k<columns-1;++k)
            {
                if(j==i)
                {
                    sign=1;
                }
                w[j][k] = matrix[j+sign][k+1];
            }
        }
        determinant+=pow(-1,i)*matrix[i][0]* determinantMatrix(w,rows-1,columns-1);
    }
    return determinant;

}
double determinantMatrix(double **matrix, int rows, int columns)
{
    if(rows==1)
    {
        return matrix[0][0];
    }
    int determinant=0;
    auto** w = new double*[rows-1];

    for(int i=0; i<rows; ++i)
    {
        int sign =0;
        for(int j=0;j<rows-1;++j)
        {
            w[j]= new double[columns-1];
            for(int k=0;k<columns-1;++k)
            {
                if(j==i)
                {
                        sign=1;
                }
                w[j][k] = matrix[j+sign][k+1];
            }
        }
        determinant+=pow(-1,i)*matrix[i][0]* determinantMatrix(w,rows-1,columns-1);
    }
        return determinant;

}


//////////////////////////////////////////////////////////////////////////////////////

bool matrixIsDiagonal(int **matrix, int rows, int columns)
{
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
        {
            if(i!=j && matrix[i][j]!=0)
                return false;
        }
    }
    return true;
}

bool matrixIsDiagonal(double **matrix, int rows, int columns)
{
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
        {
            if(i!=j && matrix[i][j]!=0)
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

void sortRow(int *array, int columns)
{
    int i,j;
    for(i=0;i<columns-1;i++)
    {
        for(j=0;j<columns-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
            }
        }
    }
}

void sortRow(double *array, int columns)
{
    int i,j;
    for(i=0;i<columns-1;i++)
    {
        for(j=0;j<columns-1;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
            }
        }
    }
}

//////////////////////////////////////////////////////////////

void sortRowsInMatrix(int **matrix, int rows, int columns)
{
    for(int i=0;i<rows;++i)
    {
        sortRow(matrix[i],columns);
    }
}

void sortRowsInMatrix(double **matrix, int rows, int columns)
{
    for(int i=0;i<rows;++i)
    {
        sortRow(matrix[i],columns);
    }
}
