//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
int main(){

    // order billing system 

    printf("\n\nWelcome to Foodies Restaurant\n");
    printf("\n\t\tMenu\n\n");
    printf("1.Burger - ₹150\n"); 
    printf("2.Pizza - ₹200\n"); 
    printf("3.Pasta - ₹120\n"); 
    printf("4.Sandwich - ₹100\n"); 
    printf("5.French Fries - ₹80\n"); 
    printf("0.Exit\n\n");

    int choice;
    int totalAmount = 0;
    do{
        
        printf("Enter your choice of order  : ");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                totalAmount = totalAmount + 150;
                printf("Burger Added to your order\n\n");
                break;
            case 2:
                totalAmount = totalAmount + 200;
                printf("Pizza Added to your order\n\n");
                break;
            case 3:
                totalAmount = totalAmount + 120;
                printf("Pasta Added to your order\n\n");
                break;
            case 4:
                totalAmount = totalAmount + 100;
                printf("Sandwich Added to your order\n\n");
                break;
            case 5:
                totalAmount = totalAmount + 80;
                printf("French Fires Added to your order\n\n");
                break;
            case 0:
                printf("Thank you\n");
                break;
        }

    }while(choice != 0);

    
    

    printf("Your total bill amount : %d\n\n", totalAmount);
    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}