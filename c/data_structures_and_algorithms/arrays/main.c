#include <stdio.h>

int main(){

    int arr[3][3], i, j, n;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        for ( j =0; j < n; ++j) {
            printf("\nArr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; ++i) {
        printf("\n");
        for ( j =0; j < n; ++j) {
            printf("\t%d ", arr[i][j]);
        }
    }

    //Determinant
    int det;
    det = (
            arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1])) -
            arr[0][1]*((arr[1][0]*arr[2][2])-(arr[2][0]*arr[1][2])) +
            arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0]))
            );

    printf("\nDeterminant = %d", det);

    return 0;
}