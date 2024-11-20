//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
int main(){
    // Simple Calculator
    int a = 20;
    int b = 10;
    printf("First Number : %d\n",a);
    printf("Second Number : %d\n",b);

    printf("\nOperation will be performed like : First 'sign' Second\n");

    printf("\nAddition : + \nSubtraction : - \nMultiplication : * \nDivision : / \n ");
    char sign;
    printf("\nEnter sign (+,-,*,/) : ");
    scanf("%c",&sign);
    //loop for operations
    if(sign == '+'){
        printf("\nAddition of given two numbers : %d\n",a+b);
    }
    else if(sign == '-'){
        printf("\nSubtraction of given two numbers : %d\n",a-b);
    }
    else if(sign == '*'){
        printf("\nMultiplication of given two numbers : %d\n",a*b);
    }
    else if(sign == '/'){
        printf("\nDivision of given two numbers : %d\n",a / b);
    }
    else{
        printf("\nInvalid SIGN USED !\n");
    }
    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;
}