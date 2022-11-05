//
// Created by adlercohen on 10/3/2022.
//
///A program to read and display a 3x3 matrix

#include <stdio.h>

int main(){

    int arr[3][3], i, j, n;
    printf("Enter the number of elements in the array :");
    scanf("%d", &n);

    for (i = 0; i < n; ++i){
        for ( j = 0; j < n; ++j) {
            printf("\nArr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; ++i){
        printf("\n");
        for( j = 0; j < n; ++j) {
            printf("\t%d", arr[i][j]);
        }
    }


    return 0;
}