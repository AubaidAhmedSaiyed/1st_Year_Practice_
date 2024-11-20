//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
int main(){
    
    int evenCount = 0,oddCount = 0,positiveCount = 0,negativeCount = 0;

    // let have a inputted numbers as below
    int num[25]  = {1,2,3,4,5,-1,-2,-3,78,90,45,32,-200,45,67,43,21,-2,5,70,45,67,89,54,23};

    // analyzing numbers
    for(int i = 0; i < 25; i++){

        if(num[i] > 0){
            positiveCount++;
        }
        else if(num[i] < 0){
            negativeCount++;
        }

        if(num[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }


    }
    printf("\nProcessing numbers...\n");

    printf("\nPositive numbers : %d\n", positiveCount);
    printf("Negative numbers : %d\n", negativeCount);
    printf("Even numbers : %d\n", evenCount);
    printf("Odd numbers : %d\n", oddCount);
    

    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;



}