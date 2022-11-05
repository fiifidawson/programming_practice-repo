//
// Created by adlercohen on 10/2/2022.
//
///A program to delete a number from an array that is already sorted in ascending order

#include <stdio.h>
int main() {

    int i, j, a, n, arr[30], pos, num;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    printf("Enter the numbers: \n");
    for (i = 0; i < n; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    printf("The numbers are arranged in ascending order below \n");
    for (i = 0; i < n; ++i)
        printf("%d\t", arr[i]);
    printf("\nEnter the element to be deleted : ");
    scanf("%d",&num);

    /*First check element is present or not in the array,
      if it is not present print element is not present.
      If it is present return position of that element*/

    pos = -1;
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("%d is not present",num);

    } else {
        printf("%d is present at position %d to be deleted",num,pos);


        /* Execute a loop to move all elements left by 1 position having
           index greater than position where to delete element */

        for (i = pos; i < n-1; i++) {
            arr[i] = arr[i + 1];
        }
        // Finally, print new array after deletion of element
        printf("\nThe new array is : ");
        for (i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
