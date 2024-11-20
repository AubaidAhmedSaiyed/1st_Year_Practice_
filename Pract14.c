//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // pattern 
    int n = 5;
    printf("\n");
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(j % 2 == 0){
                printf("0");
            }
            else{
                printf("1");
            }          
        }
        printf("\n");        
    }

    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}