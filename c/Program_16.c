//
// Created by adlercohen on 10/2/2022.
//
///A program to print the elements of a 2D array
#include <stdio.h>

int main(){
    int arr[2][2], i, j;
    for(i=0; i<2 ; i++) {
        for (j = 0; j < 2; ++j) {
            printf("Enter value for arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<2;j++)
            printf("%d\t", arr[i][j]);
    }
    return 0;
}
