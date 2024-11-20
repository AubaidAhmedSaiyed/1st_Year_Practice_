//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // computer game for picking matchsticks of 21 
    int sticks = 21;
    int pickUser;
    int pickComputer;
    int pickChoice;
    int count = 0;
    while(sticks > 0){

        do{
            if(sticks == 1){
                do{
                    printf("You have to pick up the last one !\n");
                    printf("Enter your choice of number of matchsticks to pick : ");
                    scanf("%d",&pickChoice);
                    if(pickChoice < 1 || pickChoice > 1){
                    
                    }
                }while(pickChoice != 1);
            }
            else{
                printf("Enter your choice of number of matchsticks to pick [ 1/2/3/4 ] : ");
                scanf("%d",&pickChoice);
                if(pickChoice < 1 || pickChoice > 4){
                    count += 1;
                }


            }
            

        }while(count >= 1 || pickChoice > sticks);

        sticks = sticks - pickChoice;
        printf("matchsticks remaining : %d\n\n", sticks);

        if(sticks == 0){
            printf("You loses! Ha Ha..\n");
            break;
        }

        printf("Computer's Turn...\n\n");

        if(pickChoice == 1){
            pickComputer = 4;
        }
        else if(pickChoice == 2){
            pickComputer = 3;
        }
        else if(pickChoice == 3){
            pickComputer = 2;
        }
        else{
            pickComputer = 1;
        }
        
    
        sticks = sticks - pickComputer;

        printf("Computer choice : %d\n",pickComputer);

        if(sticks <= 0){
            break;
        }

        printf("matchsticks remaining : %d\n\n", sticks);
        
    }


    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}