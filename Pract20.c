//This program is prepared by 24DIT063_Aubaid Ahmed
#include <stdio.h>

void display();
int numberOfStudents();
void displayGrades(int [] ,int);
float avg(int [],int);

void display(){
    printf("WELCOME TO CHARUSAT UNIVERSITY\n");
    printf("-------------------------------\n");
    printf("-------------------------------\n");
}

int numberOfStudents(){
    
    int n;
    printf("Enter Number of Students : ");
    scanf("%d",&n);
    return n;
    
}

void displayGrades(int grade[],int n){
    
    printf("\n\nStudent Grades:\n");

    for(int i = 0; i<n ;i++){
        printf("Enter the grade for student %d:",i+1);
        scanf("%d",&grade[i]);
        printf("Student %d : Grade = %d\n",i+1, grade[i]);
    }
}

float avg(int grade[],int n ){ 

    int sum = 0;

    for(int i = 0; i<n; i++){
        sum = sum + grade[i];
    }

    return (float)sum / n;
    

} 

int main(){

    // using different types of function declaration to display grades and do operation on that 

    display();

    int n = numberOfStudents();

    int grade[n];

    displayGrades(grade,n);

    float average = avg(grade,n);
    printf("The average grade of students is : %.2f",average);





    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;
}
    