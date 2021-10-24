//
// Created by Yonasz on 19.10.2021.
//

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

using namespace std;

int **addMatrix(int **a, int **b, int rows, int columns);

double **addMatrix(double **a, double **b, int rows, int columns);

int **subtractMatrix(int **a, int **b, int rows, int columns);

double **subtractMatrix(double **a, double **b, int rows, int columns);

int **multiplyMatrix(int **a, int **b, int rows, int columns, int columns2);

double **multiplyMatrix(double **a, double **b, int rows, int columns, int columns2);

int **multiplyByScalar(int **a, int rows, int columns, int scalar);

double **multiplyByScalar(double **a, int rows, int columns, double scalar);

int transpozeMatrix(int **a, int rows, int columns);

double transpozeMatrix(double **a, int rows, int columns);

int powerMatrix(int **a, int rows, int columns, unsigned degree)



#endif //JIPP2_LIB_H
