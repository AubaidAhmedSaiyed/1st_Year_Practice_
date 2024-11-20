//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
#include<string.h>

int teamCount = 0;

struct Coach{
    char name[30];
    int age;
    int  experience;
};
struct Team{
    char teamName[30];
    char sportsType[30];
    struct Coach coach;
};

void addTeam(struct Team [],int);
void displayTeams(struct Team [],int );
void displayCoach(struct Team [],int );
void searchTeam(struct Team [],int );

void addTeam(struct Team team[],int teamCount){

    printf("\nEnter Team Name : ");
    scanf(" %[^\n]",&team[teamCount].teamName);

    printf("Enter Sports Type : ");
    scanf(" %[^\n]",&team[teamCount].sportsType);

    printf("Enter Coach Name : ");
    scanf(" %[^\n]",&team[teamCount].coach.name);

    printf("Enter Coach Age : ");
    scanf("%d",&team[teamCount].coach.age);

    printf("Enter Coach Experience (in years): ");
    scanf("%d",&team[teamCount].coach.experience);

    printf("\nTeam Added Successfully\n\n");

}

void searchTeam(struct Team team[],int teamCount){

    char search[30];
    int found = 0;

    printf("\n\nEnter Team Name To Search : ");
    scanf(" %[^\n]",&search);

    for(int i = 0; i < teamCount; i++){

        if(strcmp(team[i].teamName, search) == 0){

            printf("\nTeam Found\n");
            printf("Team Name : %s\n",team[i].teamName);
            printf("Sports Type : %s\n",team[i].sportsType);
            printf("Coach Name : %s\n",team[i].coach.name);
            printf("Coach Age : %d\n",team[i].coach.age);
            printf("Coach Experience : %d\n\n",team[i].coach.experience);

            found = 1;
            break;
        
        }
    }
    if(found == 0){
        printf("Team Not Found\n\n");
    }

}

void displayTeams(struct Team team[],int teamCount){

    int found = 0;
    if(teamCount == 0){
        printf("\n\nNo Team in system\n");
    
    }
    else{

        char search[30];

        printf("\n\nEnter Team Name To Search : ");
        scanf(" %[^\n]",&search);

        for(int i = 0; i < teamCount; i++){
            if(strcmp(team[i].teamName, search) == 0){
                found = 1;

                printf("\nDisplaying...\n");
                
                printf("\n");
                printf("Team Name : %s\n",team[i].teamName);
                printf("Sports Type : %s\n",team[i].sportsType);
                printf("Coach Name : %s\n",team[i].coach.name);
                printf("Coach Age : %d\n",team[i].coach.age);
                printf("Coach Experience : %d years\n\n",team[i].coach.experience);
                }

            }
        }
        if(found == 0){
            printf("Team Not Found\n");
        }
        
    }


void displayCoach(struct Team team[],int teamCount){

    int found = 0;
    if(teamCount == 0){
        printf("\n No Team in system\n");
    
    }
    else{

        char search[30];

        printf("\n\nEnter Coach Name To Search : ");
        scanf(" %[^\n]",&search);

        for(int i = 0; i<teamCount; i++){
            if(strcmp(team[i].coach.name, search) == 0){
                found  = 1;

                printf("\nDisplaying...\n\n");
                
                printf("\n");
                printf("Coach Name : %s\n",team[i].coach.name);
                printf("Team Name : %s\n",team[i].teamName);
                printf("Sports Type : %s\n",team[i].sportsType);
                printf("Coach Age : %d\n",team[i].coach.age);
                printf("Coach Experience : %d years\n\n",team[i].coach.experience);
                }

            }
        }
        if(found == 0){
            printf("Team Not Found\n");
        }
        
    }

int main(){
    // Sports Team system - using nested structure

    struct Team team[10];
    int choice;

    printf("\n\nSports Team Management\n\n");
    printf("1.Add a Team\n"); 
    printf("2.Search - Team\n"); 
    printf("3.Display Team info\n"); 
    printf("4.Display Coach info\n"); 
    printf("5.EXIT\n\n"); 
    do{
        
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                addTeam(team,teamCount);
                teamCount++;
                break;
            case 2:
                searchTeam(team,teamCount);
                break;
            case 3:
                displayTeams(team,teamCount);
                break;
            case 4:
                displayCoach(team,teamCount);
                break;
            case 5:
                printf("\nOK\n");
                break;
        }

    }while(choice != 5);

    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;

}