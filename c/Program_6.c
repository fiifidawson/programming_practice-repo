//
// Created by adlercohen on 9/29/2022.
//
///A program to find whether the array of integers contains a duplicate number
#include <stdio.h>

int main(){
    int i, n, arr[30], j, num1;
    printf("Enter number of elements in the array:");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j] && i!=j)
            {
                num1 =1;
                printf("\n Duplicate numbers are at %d and %d", i, j);
            }
        }
    }
    if(num1==0)
        printf("\n There are no duplicates");

    return 0;
}
//
//# include <stdio.h>
//
//int  main( )
//{
//    int  a[20], i, j, n, dub=0, dubn=0 ;
//    printf(" Enter the Numbers of element: ") ;
//    scanf("%d ",& n) ;
//    printf("\n Enter the elements : \n") ;
//    for (  i = 1 ; i <= n ; i++)
//        scanf("%d ",& a[i]);
//
//    for (  i = 1 ; i <= n ; i++){
//        dub = 0 ;
//        for (  j = i ; j <= n ; j++)
//        {
//            if ( a[j] <= a[i] ){
//                dub = dub + 1 ;
//            }
//        }
//        if ( dub > 1 ){
//            printf(" \n %d is a duplicate element.",a[i]) ;
//            dubn = 1 ;
//        }
//    }
//    if ( dubn == 0 )
//        printf("\n There is no duplicate element. ") ;
//    return ( 0 ) ;
//}
