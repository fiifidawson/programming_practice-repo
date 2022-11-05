//
// Created by adlercohen on 9/29/2022.
//
///A program to enter n number of digits. Form a number using these digits

#include <stdio.h>
#include <math.h>

int main(){
    int i, n, arr[23], reverse = 0;

    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nSequentially: ");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    i = 0;
    while(i < n){
        reverse = reverse + arr[i] * pow(10,i);
    i++;
    }
    printf("\nReverse: %d", reverse);
}