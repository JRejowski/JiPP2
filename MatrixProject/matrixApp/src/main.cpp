#include <iostream>
#include "matrixLib/lib.h"

using namespace std;

int main(int argc, char *argv[])
{
  int rows,columns;
  int rows2,columns2;
  int scalar;
  double scalardouble;
  unsigned power;

  if (argc == 3)
  {
      if (!strcmp(argv[1], "addMatrix"))
      {
          if(!strcmp(argv[2], "int"))
          {
              cout << "How big are your matrices?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              int **matrix1 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new int[columns];
              }

              int **matrix2 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix2[i] = new int[columns];
              }
              cout << "Please insert the values of first matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }
              cout << "Please insert the values of second matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix2[i][j];
                  }
              }

              cout << "Your matrices: " << endl;
              printMatrix(matrix1, rows, columns);
              cout<<endl;
              printMatrix(matrix2, rows, columns);

              cout << "Sum of your marices: " << endl;
              printMatrix(addMatrix(matrix1, matrix2, rows, columns), rows, columns);
          }
          if(!strcmp(argv[2], "double"))
          {
              cout << "How big are your matrices?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              double **matrix1 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new double[columns];
              }

              double **matrix2 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix2[i] = new double[columns];
              }
              cout << "Please insert the values of first matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }
              cout << "Please insert the values of second matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix2[i][j];
                  }
              }

              cout << "Your matrices: " << endl;
              printMatrix(matrix1, rows, columns);
              cout<<endl;
              printMatrix(matrix2, rows, columns);

              cout << "Sum of your marices: " << endl;
              printMatrix(addMatrix(matrix1, matrix2, rows, columns), rows, columns);
          }

      }
      if (!strcmp(argv[1], "subtractMatrix"))
      {
          if(!strcmp(argv[2], "int"))
          {
              cout << "How big are your matrices?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              int **matrix1 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new int[columns];
              }

              int **matrix2 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix2[i] = new int[columns];
              }
              cout << "Please insert the values of first matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }
              cout << "Please insert the values of second matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix2[i][j];
                  }
              }

              cout << "Your matrices: " << endl;
              printMatrix(matrix1, rows, columns);
              cout<<endl;
              printMatrix(matrix2, rows, columns);

              cout << "Subtraction of your marices: " << endl;
              printMatrix(subtractMatrix(matrix1, matrix2, rows, columns), rows, columns);
          }
          if(!strcmp(argv[2], "double"))
          {
              cout << "How big are your matrices?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              double **matrix1 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new double[columns];
              }

              double **matrix2 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix2[i] = new double[columns];
              }
              cout << "Please insert the values of first matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }
              cout << "Please insert the values of second matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix2[i][j];
                  }
              }

              cout << "Your matrices: " << endl;
              printMatrix(matrix1, rows, columns);
              cout<<endl;
              printMatrix(matrix2, rows, columns);

              cout << "Subtraction of your marices: " << endl;
              printMatrix(subtractMatrix(matrix1, matrix2, rows, columns), rows, columns);
          }
      }
      if (!strcmp(argv[1], "multiplyMatrix"))
      {
          if(!strcmp(argv[2], "int"))
          {
              cout << "How big are your matrices?" << endl;
              cout << "Rows of first matrix: ";
              cin >> rows;
              cout << "Columns of first matrix: ";
              cin >> columns;
              cout << "Rows of second matrix: ";
              cin >> rows2;
              cout << "Columns of second matrix: ";
              cin >> columns2;

              int **matrix1 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new int[columns];
              }

              int **matrix2 = new int *[rows2];

              for (int i = 0; i < rows2; ++i) {
                  matrix2[i] = new int[columns2];
              }
              cout << "Please insert the values of first matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }
              cout << "Please insert the values of second matrix:" << endl;
              for (int i = 0; i < rows2; i++) {
                  for (int j = 0; j < columns2; j++) {
                      cin >> matrix2[i][j];
                  }
              }

              cout << "Your matrices: " << endl;
              printMatrix(matrix1, rows, columns);
              cout<<endl;
              printMatrix(matrix2, rows2, columns2);

              cout << "Multiplication of your marices: " << endl;
              printMatrix(multiplyMatrix(matrix1, matrix2, rows, columns,columns2), rows, columns2);
          }
          if(!strcmp(argv[2], "double"))
          {
              cout << "How big are your matrices?" << endl;
              cout << "Rows of first matrix: ";
              cin >> rows;
              cout << "Columns of second matrix: ";
              cin >> columns;
              cout << "Rows of second matrix: ";
              cin >> rows2;
              cout << "Columns of second matrix: ";
              cin >> columns2;

              double **matrix1 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new double[columns];
              }

              double **matrix2 = new double *[rows2];

              for (int i = 0; i < rows2; ++i) {
                  matrix2[i] = new double[columns2];
              }
              cout << "Please insert the values of first matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }
              cout << "Please insert the values of second matrix:" << endl;
              for (int i = 0; i < rows2; i++) {
                  for (int j = 0; j < columns2; j++) {
                      cin >> matrix2[i][j];
                  }
              }

              cout << "Your matrices: " << endl;
              printMatrix(matrix1, rows, columns);
              cout<<endl;
              printMatrix(matrix2, rows2, columns2);

              cout << "Multiplication of your marices: " << endl;
              printMatrix(multiplyMatrix(matrix1, matrix2, rows, columns,columns2), rows, columns2);
          }
      }
      if (!strcmp(argv[1], "multiplyByScalar"))
      {
          if (!strcmp(argv[2], "int"))
          {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              int **matrix1 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new int[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }
              cout<<"Enter the scalar size:"<<endl;
              cin>>scalar;
              cout <<endl<< "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;

              cout << "Your matrix X scalar value " << endl;
              printMatrix(multiplyByScalar(matrix1, rows, columns,scalar), rows, columns);
          }
          if (!strcmp(argv[2], "double")) {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              double **matrix1 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new double[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }

              cout<<"Enter the scalar size:"<<endl;
              cin>>scalardouble;
              cout <<endl<< "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;


              cout << "Your matrix X scalar value " << endl;
              printMatrix(multiplyByScalar(matrix1, rows, columns,scalardouble), rows, columns);
          }
      }
      if (!strcmp(argv[1], "transpozeMatrix"))
      {
          if (!strcmp(argv[2], "int"))
          {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              int **matrix1 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new int[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }

              cout <<endl<< "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;

              cout << "Your matrix but transposed: " << endl;
              printMatrix(transpozeMatrix(matrix1,rows,columns), columns, rows);
          }
          if (!strcmp(argv[2], "double")) {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              double **matrix1 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new double[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }


              cout <<endl<< "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;


              cout << "Your matrix but transposed: " << endl;
              printMatrix(transpozeMatrix(matrix1,rows,columns), columns, rows);
          }
      }
      if (!strcmp(argv[1],"powerMatrix"))
      {
          if (!strcmp(argv[2], "int"))
          {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              int **matrix1 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new int[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }
              cout<<"Please enter degree of the power function";
              cin>>power;

              cout <<endl<< "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;

              cout << "Your matrix but powered: " << endl;
              printMatrix(powerMatrix(matrix1,rows,columns,power),rows, columns);
          }
          if (!strcmp(argv[2], "double")) {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              double **matrix1 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new double[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }
              cout<<"Please enter degree of the power function";
              cin>>power;

              cout <<endl<< "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;


              cout << "Your matrix but powered: " << endl;
              printMatrix(powerMatrix(matrix1,rows,columns,power), columns, rows);
          }
      }
      if (!strcmp(argv[1],"determinantMatrix"))
      {
          if (!strcmp(argv[2], "int"))
          {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              int **matrix1 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new int[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }

              cout <<endl<< "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;

              cout << "Determinant of your matrix: " <<determinantMatrix(matrix1,rows,columns)<< endl;

          }
          if (!strcmp(argv[2], "double")) {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              double **matrix1 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new double[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }

              cout << endl << "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;


              cout << "Determinant of your matrix: " <<determinantMatrix(matrix1,rows,columns)<< endl;

          }
      }
      if (!strcmp(argv[1],"matrixIsDiagonal"))
      {
          if (!strcmp(argv[2], "int"))
          {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              int **matrix1 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new int[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }

              cout <<endl<< "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;

              if(matrixIsDiagonal(matrix1,rows,columns)==0) cout<<"Matrix is not diagonal :("<<endl;
              else cout<<"Matrix is diagonal!"<<endl;

          }
          if (!strcmp(argv[2], "double")) {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              double **matrix1 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new double[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }

              cout << endl << "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;


              if(matrixIsDiagonal(matrix1,rows,columns)==0) cout<<"Matrix is not diagonal :("<<endl;
              else cout<<"Matrix is diagonal!"<<endl;

          }
      }
      if (!strcmp(argv[1],"sortRowsInMatrix"))
      {
          if (!strcmp(argv[2], "int"))
          {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              int **matrix1 = new int *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new int[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }
              cout <<endl<< "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;

              sortRowsInMatrix(matrix1,rows,columns);

              cout << "Your matrix but sorted: " << endl;
              printMatrix(matrix1,rows,columns);
          }
          if (!strcmp(argv[2], "double")) {
              cout << "How big is your matrix?" << endl;
              cout << "Rows: ";
              cin >> rows;
              cout << "Columns: ";
              cin >> columns;

              double **matrix1 = new double *[rows];

              for (int i = 0; i < rows; ++i) {
                  matrix1[i] = new double[columns];
              }

              cout << "Please insert the values of matrix:" << endl;
              for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < columns; j++) {
                      cin >> matrix1[i][j];
                  }
              }

              cout <<endl<< "Your matrix: " << endl;
              printMatrix(matrix1, rows, columns);
              cout << endl;

              sortRowsInMatrix(matrix1,rows,columns);

              cout << "Your matrix but sorted: " << endl;
              printMatrix(matrix1,rows,columns);
          }
      }
  }
   else
   {
       cout<<"Wrong data! Try again, here are the possible commands: "<<endl;
       help();
   }


    return 0;
}