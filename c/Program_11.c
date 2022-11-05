//
// Created by adlercohen on 10/2/2022.
//
///A program to merge two unsorted arrays

#include <stdio.h>

int main(){

    int Arr1[20], Arr2[20], Arr3[40], i, n1, n2, n3, j, k = 0;
    printf("Enter the number of elements for 1st array:");
    scanf("%d", &n1);

    printf("\nEnter elements for first array:\n");
    for (i = 0; i < n1; ++i){
        printf("Arr1[%d] = ", i);
        scanf("%d", &Arr1[i]);
    }
    printf("\nElements in the 1st array are:");
    for (i = 0; i < n1; ++i) {
        printf("\t%d\t", Arr1[i]);
    }

    printf("\nEnter the number of elements for 2nd array:");
    scanf("%d", &n2);
    printf("\nEnter elements for second array:\n");
    for (j = 0; j < n2; ++j){
        printf("Arr2[%d] = ", j);
        scanf("%d", &Arr2[j]);
    }
    printf("\nElements in the 2nd array are:");
    for (j = 0; j < n2; ++j) {
        printf("\t%d\t", Arr2[j]);
    }
    n3 = n1+n2;
    for(i=0; i<n1; i++){
        Arr3[k] = Arr1[i];
        k++;
    }
    for(i=0;i<n2;i++)
    {
        Arr3[k] = Arr2[i];
        k++;
    }
    printf("\n\n The merged array is");
    for(i=0;i<n3;i++)
        printf("\n Arr[%d] = %d", i, Arr3[i]);

    return 0;
}
