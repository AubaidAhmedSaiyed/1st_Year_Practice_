// This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>

int main(){
    //a program to calculate and display the simple interest.
   
   
    int principalAmount = 50000;   // Variables 
    int timePeriod = 3 ; 

    float annualInterest = 5.5;

    int simpleInterest;

    simpleInterest = (principalAmount*timePeriod*annualInterest)/100; // calculating simple interest

    printf("\nSimple Interest is : %d\n",simpleInterest); // printing simple interest


    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;
}