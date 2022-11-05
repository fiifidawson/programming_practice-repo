//
// Created by adlercohen on 9/28/2022.
//
///a program to find the second largest of n numbers using an array

#include <stdio.h>

int main(){

    int i , arr[20], n, num1, num2;

    printf("Enter number of elements in array:");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // largest number, num1 is equated to the first number
    num1 = arr[0];
    // iteration
    for(i = 0; i < n; i++){
        // condition is checked whether nth arr[i] is greater than num1 if true, num1 = arr[i]
        if(arr[i] > num1){
            num1 = arr[i];
        }
    }
    //Second-largest number is equated to the second array number
    num2 = arr[1];
    for(i = 0; i < n; i++){
        if(arr[i] != num1){
            if(arr[i] > num2){
                num2 = arr[i];
            }
        }
    }
    //printf("\nLargest number is %d", num1);
    printf("\nSecond largest number is %d", num2);

    return 0;
}