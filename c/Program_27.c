//
// Created by adlercohen on 10/4/2022.
//
///A program which illustrates the use of a pointer to a three-dimensional array
#include <stdio.h>


int main(){
    int i,j,k;
    int arr[2][2][2];
    int (*parr)[2][2]= arr;

    printf("\n Enter the elements of a 2 x 2 x 2 array: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for(k = 0; k < 2; k++){
                printf("Array[%d][%d][%d] :", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    printf("\n The elements of the 2 x 2 x 2 array are: ");
    for(i = 0; i < 2; i++){
        printf("\n");
        for(j = 0; j < 2; j++){
            for(k = 0; k < 2; k++)
                printf("\t%d", *(*(*(parr+i)+j)+k));
            }
    }
    return 0;
}



