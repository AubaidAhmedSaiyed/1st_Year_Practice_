//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // pattern

    int n = 5;

    for(int i = 0; i < 5; i++){

        // for spaces 
        for(int j = 0; j < 2 * (n - i) - 2; j++){
            printf(" ");
        }

        // for numbers to be print
        for(int p = 0; p <= i; p++){
            printf("%d ",p + 1);
        }

        printf("\n");

    }


    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}


// int main()
// {
//     int rows = 5;

//     // first loop is for printing the rows
//     for (int i = 0; i < rows; i++) {

//         // loop for printing leading whitespaces
//         for (int j = 0; j < 2 * (rows - i) - 2; j++) {
//             printf(" ");
//         }

//         // loop for printing continious numbers
//         for (int k = 0; k <= i; k++) {
//             printf("%d ", k + 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }