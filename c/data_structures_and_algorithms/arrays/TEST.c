//
// Created by adlercohen on 9/29/2022.
//
#include <stdio.h>

int main(){

    int arr1[10], arr2[10], arr3[10], n1, n2, n3,k = 0, j, i, a;
    printf("Enter the number of elements for array 1:");
    scanf("%d", &n1);
    printf("\nEnter the elements for array 1:");
    for (i = 0; i < n1; ++i){
        printf("\nArray[%d] :", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nElements in array 1 :");
    for (i = 0; i < n1; ++i) {
        printf("\t%d\t", arr1[i]);
    }

    printf("\nEnter the number of elements for array 2 :");
    scanf("%d", &n2);
    printf("\nEnter the elements for array 2 :");
    for (j = 0; j < n2; ++j){
        printf("\nArray[%d] :", j);
        scanf("%d", &arr2[j]);
    }
    printf("\nElements in array 2 :");
    for (j = 0; j < n2; ++j) {
        printf("\t%d\t", arr2[j]);
    }
    n3 = n1 + n2;
    arr3[k] = arr1[i] + arr2[j];
    for(i=0; i<n1; i++){
        arr3[k] = arr1[i];
        k++;
    }
    for(i=0;i<n2;i++){
        arr3[k] = arr2[i];
        k++;
    }
    for (i = 0; i < n3; ++i){
        for (j = i + 1; j < n3; ++j){
            if (arr3[i] > arr3[j]){
                a =  arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = a;
            }
        }
    }
    printf("\nThe numbers are arranged in ascending order below \n");
    for (i = 0; i < n3; ++i)
        printf("%d\t", arr3[i]);
    return 0;
}