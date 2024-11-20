//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
int main(){
    // sorting array of prices

    int n;
    printf("\nEnter number of items [ prices to store ] : ");
    scanf("%d",&n);

    int prices[n]; // array of prices

    for(int i = 0; i<n; i++){
        printf("Enter %d : ",i+1);
        scanf("%d", &prices[i]);

    }

    printf("\nSorting...\n");

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){

            // swap if current price is greater than next price
            if(prices[j] > prices[j+1]){
                int temp = prices[j];
                prices[j] = prices[j+1];
                prices[j+1] = temp;

            }
        }

    }
    printf("\nAfter Sorting...\n\n");

    for(int i = 0; i<n; i++){
        printf("%d\t",prices[i]);
    }

    printf("\n\n24DIT063_Aubaid Ahmed\n\n");
    return 0;



}









// for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             // Swap if the current price is greater than the next price
//             if (prices[j] > prices[j + 1]) {
//                 float temp = prices[j];
//                 prices[j] = prices[j + 1];
//                 prices[j + 1] = temp;
//             }
//         }
//     }
