//
// Created by adlercohen on 10/4/2022.
//
///A program to fill a square matrix with value zero on the diagonals, 1 on the upper right triangle, and –1 on the
/// lower left triangle.
#include<stdio.h>

int main()
{
    int arr[10][10],i,j,n;
    printf("\nEnter number of rows and columns: ");
    scanf("%d",&n);

    for(i=0; i < n; i++){
        for(j=0; j < n; j++){
            if(i+j == n - 1)
                arr[i][j] = 0;
            else if(i+j < n - 1)
                arr[i][j] = 1;
            else
                arr[i][j] = -1;
        }

    }

    printf("\nTriangle is : \n");
    for(i=0; i < n; i++){
        for(j=0; j < n; j++){
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}