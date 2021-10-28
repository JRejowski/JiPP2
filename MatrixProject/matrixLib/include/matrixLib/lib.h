//
// Created by Yonasz on 19.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

using namespace std;

/**
 * Adds two martices together
 * !Important! Matrices must be same size!
 * @param a first matrix
 * @param b second matrix
 * @param rows number of rows in matrices
 * @param columns number of columns in matrices
 */

int **addMatrix(int **a, int **b, int rows, int columns);
double **addMatrix(double **a, double **b, int rows, int columns);
double** addMatrix(double** a, int** b, int rows, int columns);
double** addMatrix(int** a, double** b, int rows, int columns);


/**
 * Subtract matrix b from matrix a
 * !Important! Matrices must be same size!
 * @param a first matrix
 * @param b second matrix
 * @param rows number of rows in matrices
 * @param columns  number of columns in matrices
 */
int **subtractMatrix(int **a, int **b, int rows, int columns);
double **subtractMatrix(double **a, double **b, int rows, int columns);
double **subtractMatrix(int **a, double **b, int rows, int columns);
double **subtractMatrix(double**a, int **b, int rows, int columns);

/**
 * Multiply matrix a by matrix b
 * !Important! Number of rows in matrix a must be equal to matrix's b columns number
 * @param a first matrix
 * @param b second matrix
 * @param rows number of rows in matrix a
 * @param columns number of columns in matrix a
 * @param columns2 number of columns in matrix b
 */
int **multiplyMatrix(int **a, int **b, int rows, int columns, int columns2);
double **multiplyMatrix(double **a, double **b, int rows, int columns, int columns2);
double **multiplyMatrix(int **a, double **b, int rows, int columns, int columns2);
double **multiplyMatrix(double **a, int **b, int rows, int columns, int columns2);
/**
 * Multiply matrix a by a scalar
 * @param a matrix a
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @param scalar value of a scalar by which the matrix will be multiplied
 */
int **multiplyByScalar(int **a, int rows, int columns, int scalar);
double **multiplyByScalar(double **a, int rows, int columns, double scalar);

/**
 * Transpozing of matrix a
 * @param a matrix a
 * @param rows number of matrix's rows
 * @param columns number of matrix's columns
 */
int **transpozeMatrix(int **a, int rows, int columns);
double **transpozeMatrix(double **a, int rows, int columns);

/**
 * Powers the given matrix to given degree
 * @param a matrix a
 * @param rows number of matrix's rows
 * @param columns number of matrix's columns
 * @param degree degree to which the matrix will be powered
 */
int **powerMatrix(int **a, int rows, int columns, unsigned degree);
double **powerMatrix(double **a, int rows, int columns, unsigned degree);

/**
 * Calculates the determinant of given matrix
 * @param a matrix a
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 */
int determinantMatrix(int **a, int rows, int columns);
double determinantMatrix(double **a, int rows, int columns);

/**
 * Checks whether the matrix is Diagonal or not
 * @param a matrix a
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 */
bool matrixIsDiagonal(int **a, int rows, int columns);
bool matrixIsDiagonal(double **a, int rows, int columns);

/**
 * Swaps the values of two given variables
 * @param a variable a
 * @param b variable b
 */
void swap(int &a, int &b);
void swap(double &a, double &b);

/**
 * Sorts an array using bubble sort
 * @param a array a
 * @param columns number of elements in array
 */
void sortRow(int *a, int columns);
void sortRow(double *a, int columns);

/**
 * Sort each row in a matrix
 * @param a matrix a
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 */
void sortRowsInMatrix(int **a, int rows, int columns);
void sortRowsInMatrix(double **a, int rows, int columns);


#endif //JIPP2_LIB_H
