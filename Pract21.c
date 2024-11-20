// This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
#include<math.h>

int verifylength(int,int,int);
float sPerimeter(int ,int ,int);
float area(int,int ,int);



int verifyLength(int length1, int length2,int length3){
    int flag = 0;

    if(length1 + length2 > length3 && length2+length3 > length1 && length3 + length1 > length2){
        flag = 1;
    }

    return flag;
}

float sPerimeter(int length1,int length2,int length3){
    float semiPerimeter = (length1 + length2 + length3)/2;
    return semiPerimeter;
}

float area(int length1,int length2,int length3){

    float s = sPerimeter(length1,length2,length3);
    
    float a = sqrt( s * (s-length1) *(s-length2)*(s-length3));

    return a;

}
int main(){

    // To compute area using heron's formula while verifying length

    int length1,length2,length3;
    printf("\nEnter length of side 1 of Triangle :");
    scanf("%d",&length1);
    printf("Enter length of side 2 of Triangle :");
    scanf("%d",&length2);
    printf("Enter length of side 3 of Triangle :");
    scanf("%d",&length3);


    int is_verfiy= verifyLength(length1,length2,length3);
    if(is_verfiy == 1){
        printf("\n\nLength Verified \n");
        printf("Area Using Heron's Formula : %.2f\n",area(length1,length2,length3));
        
    }
    else{
        printf("\n\nLength Not Verified - please recheck length \n");
    }

    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;


}