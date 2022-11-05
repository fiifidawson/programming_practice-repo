//
// Created by adlercohen on 9/28/2022.
//
/// A program to find the mean of n numbers using arrays

#include <stdio.h>

int main(){
    // Declaring the variables
    int i, input, arr[60], sum = 0;
    float mean;
    printf("Enter the number of array elements:");
    scanf("%d", &input);

    // Limits the user input for the number of elements according to preset elements
    if(input <= 60) {
        //This block iterates by "i" times until "input" is met
        for (i = 0; i < input; i++){
            // arr["iteration position" i] = is show until "input" is exhausted
            printf("arr[%d] = ", i);
            scanf("%d", &arr[i]);
            //Sums up the arr[i]
            sum += arr[i];
        }
        float sum2, input2;
        sum2 = (float)sum;
        input2 = (float)input;

        // mean is calculated and displayed
        mean = sum2/input2;
        printf("\nSum of elements in array = %d", sum);
        printf("\nMean of elements in array = %.2f", mean);
    }
    else{
        printf("\nNumber of array elements is out of range:\n"
               "Range 0 - 60");
    }
}