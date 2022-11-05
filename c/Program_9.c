//
// Created by adlercohen on 10/2/2022.
//
///A program to delete a number from a given location in an array

#include <stdio.h>

int main(){

    int arr[50], i, pos, n;
    printf("Enter the number of elements in the array :");
    scanf("%d", &n);

    printf("\nEnter elements:\n");
    for (i = 0; i < n; ++i){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nElements entered\n");
    for (i = 0; i < n; ++i) {
        printf("arr[%d] = %d\t", i, arr[i]);
    }

    printf("\nEnter position to delete element:");
    scanf("%d", &pos);

    if (pos >= n+1){
        printf (" \n Deletion is not possible in the array.");
    }
    else{
        for (i = pos; i < n - 1; i++)
            arr[i] = arr[i + 1];
        printf("New array is: ");
        for (i = 0; i < n - 1; i++)
            printf("arr[%d] = %d\t ", i, arr[i]);
        return 0;
    }
}