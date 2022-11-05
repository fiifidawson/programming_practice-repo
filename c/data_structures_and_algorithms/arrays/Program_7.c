//
// Created by adlercohen on 9/30/2022.
//
///A program to insert a number at a given location in an array

#include <stdio.h>

int main(){

    int i, n, arr[20], newNum, position;

    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements in the array are: ");
    for (i = 0; i < n; i++){
        printf("\t%d", arr[i]);
    }

    printf("\nEnter the new number to be inserted:");
    scanf("%d", &newNum);

    printf("\nEnter the position of the new number:");
    scanf("%d", &position);

    for(i=n; i >= position; i--){
        arr[i+1] = arr[i];
    }
    arr[position] = newNum;
    n++;
    printf("\n The array after insertion  is: ", &newNum);
    for(i=0;i < n;i++){
        printf (" \n arr[%d] = %d", i ,arr[i]);
    }
    return 0;
}