//
// Created by adlercohen on 9/28/2022.
//
///A program to read and displays elements in an array
#include <stdio.h>

int main(){
    // Declaring the variables

    int i, input, arr[50];
    //Taking user input
    printf("Enter the number of elements: ");
    scanf("%d", &input);

    //This block iterates by "i" times until "input" is met
    for(i = 0; i < input; i++){
        // arr["iteration position" i] = is show until "input" is exhausted
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe array elements are: ");
    //iterates and prints the user input
    for(i = 0; i < input; i++){
        printf("\narr[%d] = %d", i, arr[i]);
    }
}