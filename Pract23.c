//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>

int fib(int);
int fib(int n){

    if(n == 0|| n == 1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }

}

int main(){
    // fibonacci using recursion
    int numTerms;
    printf("\nEnter a value to print fibonacci series upto that terms : ");
    scanf("%d",&numTerms);

    if(numTerms<=0){
        printf("Invalid\n");
    }
    else{
        printf("\n\nFibonacci Upto %d Terms : \n\n",numTerms);
        for(int i = 0; i<numTerms; i++){
            printf("%d\t",fib(i));
        }

    }

    

    printf("\n\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}