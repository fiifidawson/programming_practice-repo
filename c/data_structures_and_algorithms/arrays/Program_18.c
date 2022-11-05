//
// Created by adlercohen on 10/2/2022.
//
///In a small company there are five salesmen. Each salesman is supposed to sell three products. Write a program
///using a 2D array to print (i) the total sales by each salesman and (ii) total sales of each item.

#include <stdio.h>

int main(){

    int sales[5][3];
    int i, j, total_sales;

    printf("Enter sales for salesmen");
    for (i = 0; i < 5; ++i){
        printf("\nEnter the sales for salesman %d : ", i+1);
        for (j = 0; j < 3; ++j){
            scanf("%d", &sales[i][j]);
        }
    }
    for (i = 0; i < 5; ++i){
        total_sales = 0;
        for (j = 0; j < 3; ++j){
            total_sales += sales[i][j];
        }
        printf("\nTotal sales for salesman %d is %d", i+1, total_sales);
    }

    for (i = 0; i < 3; ++i){
        total_sales = 0;
        for (j = 0; j < 5; ++j) {
            total_sales += sales[j][i];
        }
        printf("\nTotal sales for item %d is %d", i+1, total_sales);
    }


    return 0;
}