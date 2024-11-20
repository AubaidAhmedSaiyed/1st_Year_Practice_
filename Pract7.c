//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
int main(){
    //greater or less
    int ramanBungalow = 12000000;
    int ramanPlot = 6000000;
    int ramanCar = 3000000;
    int sumRaman;

    sumRaman = ramanBungalow + ramanPlot + ramanCar;

    int sumanApartment = 11000000;
    int sumanHotel = 8000000;
    int sumanCar = 8000000;
    int sumSuman;

    sumSuman = sumanApartment + sumanCar + sumanHotel;

    if(sumSuman > sumRaman){
        printf("\nSuman is more wealthier than Raman\n");
    }
    else if(sumRaman > sumSuman){
        printf("\nRaman is more wealthier than Suman\n");
    }
    else{
        printf("\nSuman And Raman Both Have Suman Wealth\n");
    }
    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;
}
