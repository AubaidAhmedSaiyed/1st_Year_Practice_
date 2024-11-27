// This program is prepared by 24dit063_Aubaid Ahmed
#include <stdio.h>

void swapping(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}



int main() {

   
    int balance1 = 50000;
    int balance2 = 20000;

    printf("Before Swapping : \n\n");

    printf("Balance of Account 1: %d\n",balance1);
    printf("Balance of Account 2: %d\n\n",balance2);

    printf("After Swapping : \n\n");

    swapping(&balance1,&balance2);

    printf("Balance of Account 1: %d\n",balance1);
    printf("Balance of Account 2: %d\n\n",balance2);

    printf("\n24DIT063_Aubaid Ahmed\n\n");

    return 0;
}
