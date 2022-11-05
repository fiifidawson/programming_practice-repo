//
// Created by adlercohen on 10/2/2022.
//
///A program to read an array of n numbers and then find the smallest number

#include <stdio.h>

int main(){

    int i, n, arr[25], num1;
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
        }
    }
    printf("\nThe smallest number is %d", num1);
}