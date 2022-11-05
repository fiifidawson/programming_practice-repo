//
// Created by adlercohen on 9/29/2022.
//
///A program to print the position of the smallest number of n numbers using arrays
#include <stdio.h>

int main(){

    int i, n, arr[25], num1, position;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

//    printf("Enter the elements in the array\n");
    for(i = 0; i < n; i ++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    num1 = arr[0];
    for(i = 0; i < n; i ++){
        if(arr[i] < num1){
            num1 = arr[i];
            position = i;
        }
    }

    printf("\nThe smallest number is %d", num1);
    printf("\nPosition of the smallest number is %d", position);
}