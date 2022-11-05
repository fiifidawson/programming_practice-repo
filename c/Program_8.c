//
// Created by adlercohen on 9/30/2022.
//
///A program to insert a number in an array that is already sorted in ascending order

#include <stdio.h>
int main(){

    int i, j, a, n, arr[30], pos = 0, num;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    printf("Enter the numbers: \n");
    for (i = 0; i < n; ++i) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; ++i){
        for (j = i + 1; j < n; ++j){
            if (arr[i] > arr[j]){
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    printf("The numbers are arranged in ascending order below \n");
    for (i = 0; i < n; ++i)
        printf("%d\t", arr[i]);

    printf("\nEnter the element to be entered : ");
    scanf("%d",&num);

    /*Find position where elements should be entered.*/
    for(i=0;i<n;i++){
        if(arr[i]<num){
            pos++;
        }else{
            break;
        }
    }
    printf("%d should be entered at position %d",num,pos);

    /* Execute a loop to move all elements right by 1 position having
    index greater than position where to insert element */

    for(i=n-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }

    // Insert element at given position
    arr[pos] = num;

    // Finally, print new array after insertion of new element
    printf("\nThe new array is : ");
    for(i=0;i<=n;i++) {
        printf("%d\t ", arr[i]);
    }

    return 0;
}
