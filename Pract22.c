//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>

int totalMarks(int [],int n);
int averageMarks(int [],int n);
int maxMarks(int marks[],int n);
int minMarks(int marks[],int n);




int totalMarks(int marks[],int n){
    int sum = 0;
    for(int i = 0; i<n; i++){

        sum = sum + marks[i];

    }
    return sum;
}

int averageMarks(int marks[],int n){

    int total = totalMarks(marks,n);
    return total/n;
}

int maxMarks(int marks[],int n){
    int max = marks[0];
    for(int i = 0; i<n; i++){
        if(max < marks[i]){
            max = marks[i];
        }

    }
    return max;
}

int minMarks(int marks[],int n){
    int min = marks[0];
    for(int i = 0; i<n; i++){
        if(min > marks[i]){
            min = marks[i];
        }

    }
    return min;
}

int main(){
    //  Compute Given operations using array of marks
    int n;
    printf("\nEnter number of student's marks to store : ");
    scanf("%d",&n);

    int marks[n];

    for(int i = 0; i<n; i++){
        printf("Enter Marks %d : ",i+1);
        scanf("%d",&marks[i]);

    }
    printf("\n\nTotal Marks : %d\n",totalMarks(marks,n));
    printf("Average Marks : %d\n",averageMarks(marks,n));
    printf("Maximum Marks : %d\n",maxMarks(marks,n));
    printf("Minimum Marks : %d\n",minMarks(marks,n));

    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}