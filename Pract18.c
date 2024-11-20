//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
#include<string.h>

int main(){
    
    // sorting names of 5 students
    int numberOfStudents = 5;

    char names[numberOfStudents][50];

    for(int j = 0; j < numberOfStudents; j++){
        printf("Student %d :",j+1);
        scanf("%s", &names[j]);
    }

    for(int i = 0; i < numberOfStudents - 1; i++){
        for(int j = 0; j < numberOfStudents - i - 1; j++){
            if (strcmp(names[j] ,names[j+1]) > 0){

                //swapping names if they are in wrong order
                char temp[40];
                strcpy(temp , names[j]);
                strcpy(names[j] , names[j+1]);
                strcpy(names[j+1] , temp);
            }
        }
    }


    printf("\n");

    for(int i = 0; i<numberOfStudents; i++){
        printf("Students %d : %s\n",i+1,names[i]);
    }

    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;



}


