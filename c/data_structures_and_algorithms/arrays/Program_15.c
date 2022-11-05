//
// Created by adlercohen on 10/2/2022.
//
///A program to display an array of given numbers
#include <stdio.h>

int main(){

    int i, arr[]={1,2,3,4,5,6,7,8,9};
    int n = arr[8];

    for(i = 0; i < n; i++){
        printf("\narr[%d] = %d", i, arr[i]);
    }

}