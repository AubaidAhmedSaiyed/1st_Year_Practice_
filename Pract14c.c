// This program is prepared by  Aubaid Ahmed
#include<stdio.h>
int main(){
    int n = 4;
    for(int i = 0; i<4; i++){

        for(int j = 0; j<n-i-1; j++){
            printf(" ");
        }
        for(int k = 0; k<=i; k++){
            printf("%c",'A'+k);
        }
        for(int p = i-1; p>=0; p--){
            printf("%c",'A' + p);
        }
        printf("\n");

    }

    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}