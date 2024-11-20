//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
int main(){
    
    // print multiplication table 
    int verticalSize;
    int horizontalSize;

    printf("\nEnter size of table vertically: ");
    scanf("%d",&verticalSize);
    printf("\nEnter size of table horizontally: ");
    scanf("%d",&horizontalSize);
    printf("\n\nMultiplication Table ( %d x %d )\n",verticalSize,horizontalSize);
    for(int i = 1; i <= verticalSize; i++){
        for(int j = 1 ; j <= horizontalSize; j++){
            printf("%d\t",j*i);
            

        }
        printf("\n");
    }

    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;



}