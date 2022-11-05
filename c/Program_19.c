//
// Created by adlercohen on 10/2/2022.
//
///A program to read a 2D array marks which stores the marks of five students in three subjects.
/// Write a program to display the highest marks in each subject.
#include <stdio.h>

int main(){

    int marks[5][3];
    int i, j, max_marks;

    printf("Enter marks for each student");
    for (i = 0; i < 5; ++i){
        printf("\nEnter the marks for student %d : ", i+1);
        for (j = 0; j < 3; ++j){
            printf("\nMarks of subject %d : ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for(j=0; j<3; j++){
        max_marks = -999;
        for(i=0; i<5; i++){
            if(marks[i][j] > max_marks)
                max_marks = marks[i][j];
        }
        printf("\n The highest marks obtained in the subject %d = %d", j+1, max_marks);
    }

    return 0;
}