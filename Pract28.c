// This program is prepared by 24dit063_Aubaid Ahmed
#include <stdio.h>

void count(int marks[],int size){ // marks[] == *marks


    int distinction = 0;
    int pass = 0;
    int fail = 0;
    int firstClass = 0;

    for(int i = 0; i<size; i++){

        if(*(marks + i) >= 70) {
            distinction++;

        }
        else if(*(marks + i) >= 60 && (*(marks + i)) <= 69){
            firstClass++;
        }
        else if(*(marks + i) >= 40 && (*(marks + i)) <= 59){
            pass++;
        }
        else{
            fail++;
        }

    }

    printf("DISTINCTION %d",distinction);
    printf(" FIRST CLASS %d",firstClass);
    printf(" PASS %d",pass);
    printf(" FAIL %d\n",fail);


}
int main(){
    int marks[] = {34,56,78,98,12,31,67,75,91,23};

    int size  = sizeof(marks)/sizeof(marks[0]);

    int distinction = 0;
    int pass = 0;
    int fail = 0;
    int firstClass = 0;

    for(int i = 0; i<10; i++){

        if(*(marks + i) >= 70) {
            distinction++;

        }
        else if(*(marks + i) >= 60 && (*(marks + i)) <= 69){
            firstClass++;
        }
        else if(*(marks + i) >= 40 && (*(marks + i)) <= 59){
            pass++;
        }
        else{
            fail++;
        }

    }

    printf("DISTINCTION %d",distinction);
    printf(" FIRST CLASS %d",firstClass);
    printf(" PASS %d",pass);
    printf(" FAIL %d",fail);

    count(marks,size);
    printf("\n\n24DIT063_Aubaid Ahmed\n\n");

    return 0;
}
