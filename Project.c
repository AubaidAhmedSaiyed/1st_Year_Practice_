// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

struct month{
    int month[12];
};

struct tracker{
    char name[30];
    int total_money[12];
    int money_used[12];
    int saving[12];
    struct month m;
        
    
};
struct  tracker track_person[3];

void ExpDe(struct tracker track_person[],int n );
void expdeM(struct tracker track_person[] , int n);
void expdeY(struct tracker track_person[],int n);
void Summary(struct tracker track_person[],int n);
void SummaryM(struct tracker track_person[],int n);
void updateM(struct tracker track_person[],int n);
void uptotal(struct tracker track_person[],int n);
int totalSaving(struct tracker track_person[],int n);
void percentageAmountSaved(struct tracker track_person[],int n);

void ExpDe(struct tracker track_person[],int n ){
    if(n>1){
        for(int i=0;i<n;i++){
            printf("Enter User Name %d : ",i+1);
            scanf(" %[^\n]",&track_person[i].name);
        }
    }
    else{
        printf("Enter User Name:");
        scanf(" %[^\n]",&track_person[0].name);
    }
   
    
    printf("Data Stored Successfully !\n");
    
}
void expdeM(struct tracker track_person[] , int n){
    char u[30];
    printf("Enter User Name:");
    scanf(" %[^\n]",&u);
    if(n>1){
        
        for(int i = 0;i<n;i++){
        
            if(strcmp(u,track_person[i].name)){
                
                int num;
                printf("Enter Month Number:");
                scanf("%d",&num);
                num = track_person[i].m.month[num];
                printf("Total Amount in Month %d :", num);
                scanf("%d",&track_person[i].total_money[num]);
                printf("Total Amount Used in Month %d :", num);
                scanf("%d",&track_person[i].money_used[num]);
                track_person[i].saving[num] = (track_person[i].total_money[num]) - (track_person[i].money_used[num]);
                
            }
            break;
        
        }
    }
    else{
            int num;
            printf("Enter Month Number:");
            scanf("%d",&num);
            track_person[0].m.month[num] = num;
            printf("Total Amount in Month %d :", num);
            scanf("%d",&track_person[0].total_money[num]);
            printf("Total Amount Used in Month %d :", num);
            scanf("%d",&track_person[0].money_used[num]);
            track_person[0].saving[num] = (track_person[0].total_money[num]) - (track_person[0].money_used[num]);
           
    }
        
    
    
   printf("Data Stored Successfully !\n");
}
void expdeY(struct tracker track_person[],int n){
    char u[30];
    printf("Enter User Name:");
    scanf(" %[^\n]",&u);
    for(int i = 0;i<n;i++){
        
        if(strcmp(u,track_person[i].name)){
    
            for(int j=0;j<12;j++){
                printf("Total Amount in Month %d :", j+1);
                scanf("%d",&track_person[i].total_money[j]);
                printf("Total Amount Used in Month %d :", j+1);
                scanf("%d",&track_person[i].money_used[j]);
                track_person[i].saving[j] = track_person[i].total_money[j]- track_person[i].money_used[j];
                int a = i+1 ;
                a= track_person[i].m.month[j];
            }
        }
        // else{
        //     printf("User Name Not Found!\n");
        // }
    }
    
    printf("Data Stored Successfully !\n");
}

void Summary(struct tracker track_person[],int n){
    char u[30];
    printf("Enter User Name :");
    scanf("%d",&u);
    for(int j=0;j<12;j++){
        if(strcmp(u,track_person[j].name)){
            for(int i = 0;i<12;i++){
                
                printf("Month : %d\n",i+1);
                printf("Total Amount in Month : %d\n",track_person[j].total_money[i]);
                printf("Total Amount Used in Month : %d\n", track_person[j].money_used[i]);
                printf("Savings : %d\n",track_person[j].saving[i]);
                
            }
           
        }
         break;
        
            
    }
}

void SummaryM(struct tracker track_person[],int n){
    char u[30];
    printf("Enter User Name :");
    scanf(" %[^\n]",&u);
    for(int j=0;j<3;j++){
        if(strcmp(u,track_person[j].name)== 0){
            
            int mn;
            printf("Enter Month Number:");
            scanf("%d",&mn);
            if(mn>=1 && mn<=12){
                printf("Month : %d\n",mn);
                printf("Total Amount in Month : %d\n",track_person[j].total_money[mn-1]);
                printf("Total Amount Used in Month : %d\n", track_person[j].money_used[mn-1]);
                printf("Savings : %d\n",track_person[j].saving[mn-1]);
            }
            else{
                printf("Wrong Month Number!\n");
            }
           
            
            return;
        }
        else{
            printf("User Name Not Found!\n");
        }
        
    
        
    }
    
}
void updateM(struct tracker track_person[],int n){
    
    int n1,n2;
    char n3[30];
    printf("Enter Name stored in your Expense Book:");
    scanf("%d",&n3);
    printf("Enter Month Number:");
    scanf("%d",&n1);
    printf("Enter New/Updated Total Money:");
    scanf("%d",&n2);
    for(int i =0;i<3;i++){
        if(strcmp(n3 ,track_person[i].name)){
            for(int j = 0;j<12;j++){
                if(n1==track_person[i].m.month[j]){
                    
                    n2=track_person[i].total_money[j];
                    printf("Updated successfully !\n");
                }
                else{
                    printf("Not in Your Record !\n");
                }
            }
            
        }
        else{
            printf("User Name Not Found!\n");
            
        }
        
    }
    
}

void uptotal(struct tracker track_person[],int n){
    int n1,n2;
    char n3[30];
    printf("Enter Name stored in your Expense Book:");
    scanf("%d",&n3);
    printf("Enter Month Number:");
    scanf("%d",&n1);
    printf("Enter New/Updated Monthly Money:");
    scanf("%d",&n2);
    for(int i =0;i<3;i++){
        if(strcmp(n3,track_person[i].name)){
            for(int j = 0;j<12;j++){
                if(n1,track_person[i].m.month[j]){
                    
                    n2=track_person[i].money_used[j];
                    printf("Updated successfully !\n");
                    
                }
                else{
                    printf("Not in Your Record !\n");
                }
            }
            
        }
        else{
            printf("User Name Not Found!\n");
        }
    }
    
}

int totalSaving(struct tracker track_person[],int n){
    
    char u[30];
    printf("Enter User Name :");
    scanf("%d",&u);
    int sum;
    for(int j=0;j<3;j++){
        if(strcmp(u,track_person[j].name)){
            for(int i=0;i<12;i++){
                    sum = sum +  track_person[j].saving[i];
            }
        }
        else{
            printf("User Name Not Found!\n");
        }
    
    }
    return sum;
}    
void percentageAmountSaved(struct tracker track_person[],int n){
    char u[30];
    printf("Enter User Name :");
    scanf("%d",&u);
    int sumMoney;
    for(int j=0;j<3;j++){
        if(strcmp(u,track_person[j].name)){
            for(int i=0;i<12;i++){
                    sumMoney = sumMoney +  track_person[j].saving[i];
            }
        }
        else{
            printf("User Name Not Found!\n");
        }
    
    }
    int a=totalSaving(track_person,n);
    int percentage = (a/sumMoney)*100;
    
    printf("Percentage of Amount Saved :%d",percentage);
}

int main() {
    // Write C code here
    printf("\t\t\t------- Welcome To  Expense Book [Free Version] -------\n\n");
    printf("\t\t-------------------------------------------------------------------\n\n");
    printf("\t\t Guidelines:\n\n");
    printf("\t\t-> Only 3 User's Data Can be Stored in Free Version\n");
    printf("\t\t-> if You Add More than 3 User then It will automatically store 3 users in Expense Book\n\n");
    printf("\t\t-------------------------------------------------------------------\n\n");
    int n;
    printf("How Many User's to Add in Expense Book ? :");
    scanf("%d",&n);
    if(n>3){
        printf("Only 3 User's Data Can be Stored in Free Version\n");
        n=3;
        struct tracker track_person[n];
    }
    else{
         struct tracker track_person[n];
         
        
    }
    printf("\n");
    
    int option;
    
    
    do{
        printf("\t\t\t----  Menu  ----\n\n");
        printf("\n");
        printf("\t\t1.Add User in Expense Book\n");
        printf("\t\t2.Add Expense Details - For A Month\n");
        printf("\t\t3.Add Expense Details - For A Year\n");
        printf("\t\t4.Display Expense Details of A Particular Month\n");
        printf("\t\t5.Display All Expense Details As A Summary\n");
        printf("\t\t6.Update Total Money of a Particular Month \n");
        printf("\t\t7.Update Monthly Money Used of a Particular Month\n");
        printf("\t\t8.Calculate Total Savings of A Year\n");
        printf("\t\t9.Calculate Percentage of Amount Saved in a Year\n");
        printf("\t\t10.EXIT\n");
        printf("\n\n");
        int ch;
        printf("Enter Your choice:");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:
                ExpDe(track_person,n);
                break;
            case 2:
                expdeM(track_person,n);
                break;
            case 3:
                expdeY(track_person,n);
                break;
            case 4:
                SummaryM(track_person,n);
                break;
            case 5:
                Summary(track_person,n);
                break;
            case 6:
                uptotal(track_person,n);
                break;
            case 7:
                updateM(track_person,n);
                break;
            case 8:
                int sum = totalSaving(track_person,n);
                printf("Sum is: %d",sum);
                break;
            case 9:
                percentageAmountSaved(track_person,n);
                break;
            case 10:
                printf("OK");
                break;
                
        }
        
    }while(option != 9);
    
    
    return 0;
}