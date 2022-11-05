//
// Created by adlercohen on 10/3/2022.
//
///A program to transpose a 3x3 matrix
#include <stdio.h>

int main(){

    int arr[3][3], i, j, n, transpose[3][3];

    printf("Enter the number of elements in the matrix :");
    scanf("%d", &n);

    for (i = 0; i < n; ++i){
        for ( j = 0; j < n; ++j) {
            printf("\nMatrix[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; ++i){
        printf("\n");
        for ( j = 0; j < n; ++j) {
            printf("\t%d", arr[i][j]);
        }
    }
    for (i = 0; i < n; ++i){
        for(j=0;j<3;j++){
            transpose[i][j] = arr[j][i];
        }
    }
    printf("\n Transposed elements are:");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++)
            printf("\t %d", transpose[i][j]);
    }

    return 0;
}