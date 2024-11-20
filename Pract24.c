//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>


struct Book{
    char title[30];
    char author[30];
    float price;
};

void displayDetails(struct Book);

void displayDetails(struct Book b){

    printf("\nDisplaying Book Details: \n\n");
    printf("Book Title : %s\n",b.title);
    printf("Book author : %s\n",b.author);
    printf("Book price : %.2f\n",b.price);

}

int main(){

    // passing structure as function argument and display details

    struct Book b;

    printf("\nEnter Book Title : ");
    scanf(" %[^\n]",&b.title);

    printf("Enter Book Author : ");
    scanf(" %[^\n]",&b.author);

    printf("Enter Book Price : ");
    scanf("%f",&b.price); 

    displayDetails(b);

    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}