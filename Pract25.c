//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>

union library{
    int accessNumber;
    char name[30];
    char author[30];
    float price;
    int flag;
};


int main(){
    //  create a union and display details

    union library book;
    char ch;

    printf("\nEnter Book Name : ");
    scanf(" %[^\n]",&book.name);

    printf("\nBook Name : %s\n", book.name);

    printf("Enter Book Access Number : ");
    scanf("%d",&book.accessNumber);

    printf("\nBook Access Number : %d\n", book.accessNumber);

    printf("Enter Book Author : ");
    scanf(" %[^\n]",&book.author);

    printf("\nBook Author : %s\n", book.author);

    printf("Enter Book Price : ");
    scanf("%f",&book.price); 

    printf("\nBook Price : %.2f\n", book.price);

    getchar();

    printf("\nDo you issued the book?[ Y/N ] : ");
    scanf("%c",&ch);

    if (ch == 'Y'){
        book.flag = 1;
    }
    else{
        book.flag = 0;
    }

    printf("\nStatus of Issue of Book : %s\n", (book.flag == 1) ? "Issued" : "Not Issued");





    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}