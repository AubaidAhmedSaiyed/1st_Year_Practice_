//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
int main(){
    // Grading system using ternary operator
    int marks;
    printf("\nEnter Your Marks : ");
    scanf("%d",&marks);

    char grade;
    // nested  ternary operator is used below
    grade = (marks >= 90) ? 'A' : (marks >= 80) ?  'B' : (marks >= 70) ? 'C' : (marks  >= 60) ? 'D' : 'F';

    printf("\nYour Grade is : %c\n",grade);

    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}