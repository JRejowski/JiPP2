//
// Created by Yonasz on 19.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

using namespace std;

/**
 * Lists all of possible actions (show documentation)
 */
void help();


/**
 * Function to print matrix
 * @param matrix given matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 */
void printMatrix(int **matrix, int rows, int columns);
void printMatrix(double **matrix, int rows, int columns);

/**
 * Simple function to delete matrix
 * @param matrix matrix that you want to delete
 * @param rows number of rows in given matrix
 */
void deleteMatrix(int **matrix, int rows);
void deleteMatrix(double **matrix, int rows);

/**
 * Adds two martices together
 * !Important! Matrices must be same size!
 * @param matrix1 first matrix
 * @param matrix2 second matrix
 * @param rows number of rows in matrices
 * @param columns number of columns in matrices
 */
int **addMatrix(int **matrix1, int **matrix2, int rows, int columns);
double **addMatrix(double **matrix1, double **matrix2, int rows, int columns);
double** addMatrix(double** matrix1, int** matrix2, int rows, int columns);
double** addMatrix(int** matrix1, double** matrix2, int rows, int columns);


/**
 * Subtract one matrix(matrix2) from another matrix(matrix1)
 * !Important! Matrices must be same size!
 * @param matrix1 first matrix
 * @param matrix2 second matrix
 * @param rows number of rows in matrices
 * @param columns  number of columns in matrices
 */
int **subtractMatrix(int **matrix1, int **matrix2, int rows, int columns);
double **subtractMatrix(double **matrix1, double **matrix2, int rows, int columns);
double **subtractMatrix(int **matrix1, double **matrix2, int rows, int columns);
double **subtractMatrix(double**matrix1, int **matrix2, int rows, int columns);

/**
 * Multiply first matrix by second matrix
 * !Important! Number of rows in first matrix must be equal to second matrix's columns number
 * @param matrix1 first matrix
 * @param matrix2 second matrix
 * @param rows number of rows in first matrix
 * @param columns number of columns in first matrix
 * @param columns2 number of columns in second matrix
 */
int **multiplyMatrix(int **matrix1, int **matrix2, int rows, int columns, int columns2);
double **multiplyMatrix(double **matrix1, double **matrix2, int rows, int columns, int columns2);
double **multiplyMatrix(int **matrix1, double **matrix2, int rows, int columns, int columns2);
double **multiplyMatrix(double **matrix1, int **matrix2, int rows, int columns, int columns2);
/**
 * Multiply matrix by a scalar
 * @param matrix given matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 * @param scalar value of a scalar by which the matrix will be multiplied
 */
int **multiplyByScalar(int **matrix, int rows, int columns, int scalar);
double **multiplyByScalar(double **matrix, int rows, int columns, double scalar);

/**
 * Transpozing of given matrix
 * @param matrix given matrix
 * @param rows number of matrix's rows
 * @param columns number of matrix's columns
 */
int **transpozeMatrix(int **matrix, int rows, int columns);
double **transpozeMatrix(double **matrix, int rows, int columns);

/**
 * Powers the given matrix to given degree
 * @param matrix given matrix
 * @param rows number of matrix's rows
 * @param columns number of matrix's columns
 * @param degree degree to which the matrix will be powered
 */
int **powerMatrix(int **matrix, int rows, int columns, unsigned degree);
double **powerMatrix(double **matrix, int rows, int columns, unsigned degree);

/**
 * Calculates the determinant of given matrix
 * !Important! Numbers of rows and columns in matrix must be equal!
 * @param matrix given matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 */
int determinantMatrix(int **matrix, int rows, int columns);
double determinantMatrix(double **matrix, int rows, int columns);

/**
 * Checks whether the matrix is Diagonal or not
 * @param matrix given matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 */
bool matrixIsDiagonal(int **matrix, int rows, int columns);
bool matrixIsDiagonal(double **matrix, int rows, int columns);

/**
 * Swaps the values of two given variables
 * @param a first variable
 * @param b second variable
 */
void swap(int &a, int &b);
void swap(double &a, double &b);

/**
 * Sorts an array using bubble sort
 * @param array given array
 * @param columns number of elements in array
 */
void sortRow(int *array, int columns);
void sortRow(double *array, int columns);

/**
 * Sort each row in a matrix using bubble sort
 * @param matrix given matrix
 * @param rows number of rows in matrix
 * @param columns number of columns in matrix
 */
void sortRowsInMatrix(int **matrix, int rows, int columns);
void sortRowsInMatrix(double **matrix, int rows, int columns);


#endif //JIPP2_LIB_H
