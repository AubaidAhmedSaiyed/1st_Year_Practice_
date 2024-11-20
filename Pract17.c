//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
int main(){

    int reservedSeats;
    printf("\nEnter number of reserved seats: ");
    scanf("%d",&reservedSeats);

    char seating[5][8];
    int row,seat;

    for(int i = 0; i<5; i++){
        for(int j = 0; j<8; j++){
            seating[i][j] = '0';
        }
    }

    for(int i = 0; i<reservedSeats; i++){
        
        printf("\nEnter row and seat number of reserved seat %d (e.g., 2 5): ",i+1);
        scanf("%d %d",&row,&seat);
        seating[row-1][seat-1] = 'X';
    
    }
    
    // displaying seating chart

    printf("\n\nSeating Chart:\n");
    for(int i = 0; i<5; i++){
        printf("Row %d : ",i+1);
        for(int j = 0; j<8; j++){
            printf("%c ",seating[i][j]);
        }
        printf("\n");
    }


    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;



}