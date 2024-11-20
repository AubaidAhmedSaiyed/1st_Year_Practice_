//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
#include<windows.h>
int main(){
    // countdown timer

    int time;
    printf("\nEnter Time for timer to start : ");
    scanf("%d",&time);

    printf("\n");

    for(int i = time; i>=0 ;i--){

        Sleep(1000);  // for delay of 1 second in each iteration
        printf("%d\n",i);
        if(i == 0){
            printf("\n\nCountdown completed!\n");
        }
    }


    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}