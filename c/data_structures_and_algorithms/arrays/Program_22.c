//
// Created by adlercohen on 10/3/2022.
//
///A program to input two m x n matrices and then calculate the sum of their corresponding elements and store it in a
/// third m x  n matrix.

#include <stdio.h>

int main() {
    int nr, nc, mat1[20][20], mat2[20][20], sum[40][40], i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &nr);
    printf("Enter the number of columns : ");
    scanf("%d", &nc);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < nr; ++i)
        for (j = 0; j < nc; ++j) {
            printf("Enter element matrix1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }

    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < nr; ++i)
        for (j = 0; j < nc; ++j) {
            printf("Enter element matrix2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }

    // adding two matrices
    for (i = 0; i < nr; ++i)
        for (j = 0; j < nc; ++j) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    // printing the result
  printf("\nSum of two matrices: \n");
    for(i=0;i<nr;i++){
        printf("\n");
        for(j=0;j<nc;j++)
            printf("%d\t", sum[i][j]);
    }

    return 0;
}