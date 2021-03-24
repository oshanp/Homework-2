/* File: matrix_static.h */
#ifndef MATRIXh
#define MATRIXh
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define FORMAT "%8.3lf"
#define MAX_ROW 10
#define MAX_COL 10

typedef double T;

typedef struct {
  int  row_dim, col_dim;
  T element[MAX_ROW][MAX_COL];
} matrix;

/* function prototypes */
matrix create_empty(int rdim, int cdim);
matrix create_initval(int rdim, int cdim, T val);
matrix create_initvals(int rdim, int cdim, T* initval);
void destroy(matrix);
void matrix_print(matrix);
T retrieve(int row, int col, matrix m); 
void assign(int row, int col, matrix*, T val);
void equate(matrix* m1, matrix* m2);  
matrix add(matrix, matrix);
matrix subtract(matrix, matrix);
matrix negate(matrix);
matrix multiply(matrix, matrix);
matrix scalar_multiply(T scalar, matrix);


#endif
