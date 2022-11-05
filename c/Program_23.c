//
// Created by adlercohen on 10/4/2022.
//
///A program to multiply two m ¥ n matrices
#include <stdio.h>

int main(){
    int mat1[10][10], mat2[10][10], mult[100][100], nr, nc, i, j, k;
    printf("Enter the number of rows for matrix:");
    scanf("%d", &nr);

    printf("\nEnter the number of columns for matrix:");
    scanf("%d", &nc);

    printf("\nEnter elements for matrix 1:\n");
    for (i = 0; i < nr; ++i){
        for (j = 0; j < nc; ++j) {
            printf("Matrix1[%d][%d] =", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter elements for matrix 2:\n");
    for (i = 0; i < nr; ++i){
        for (j = 0; j < nc; ++j) {
            printf("Matrix2[%d][%d] =", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    // Initializing elements of matrix mult to 0.
    for (i = 0; i < nr; ++i) {
        for (j = 0; j < nc; ++j) {
            mult[i][j] = 0;
        }
    }
    // Multiplying first and second matrices and storing it in result
    for ( i = 0; i < nr; ++i) {
        for (j = 0; j < nc; ++j) {
            for (k = 0; k < nc; ++k) {
                mult[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\nProduct of the two matrices is:");
    for (i = 0; i < nr; ++i) {
        printf("\n");
        for (j = 0; j < nc; ++j) {
            printf("%d\t", mult[i][j]);
        }
    }
    return 0;
}