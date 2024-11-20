//This program is prepared by 24DIT063_Aubaid Ahmed
#include<stdio.h>
#include<string.h>

int main(){
    
    // Note taking apllication with string
    char note1[100],note2[100];
    char temp;
    int i,len,count = 0;
    int choice;

    do{
        printf("\n\n1.Length of a Note\n");
        printf("2.Reverse a Note\n");
        printf("3.Compare Two Notes\n");
        printf("4.Copy One Note to Another\n");
        printf("5.Concate Two  Notes\n");
        printf("6.EXIT\n\n");

        
        printf("Enter your choice : ");
        scanf("%d",&choice);
    
        switch(choice){
            case 1:
                printf("\n\nEnter a string : ");
                scanf(" %[^\n]",&note1);
                for(int i = 0; note1[i] != '\0'; i++){
                    len++;
                }
                printf("Length of Note is : %d\n\n",len);
                break;
            case 2:
                printf("\n\nEnter Note to reverse : ");
                scanf(" %[^\n]",&note1);
                //length
                for(int i = 0; note1[i] != '\0'; i++){
                    len++;
                }
                // reversing
                for(int j = 0; j < len/2; j++){

                    
                    temp  = note1[j];
                    note1[j]= note1[len - 1 - j];
                    note1[len - 1 - j] = temp;

                    
                }
                printf("Reversed Note: %s\n\n",note1);
                break;

            case 3:
                printf("\n\nEnter Note one to compare: ");
                scanf(" %[^\n]",&note1);
                printf("\n\nEnter Note two to compare: ");
                scanf(" %[^\n]",&note2);
                // for comparison
                i=0;
                while(note1[i] != '\0' && note2[i] != '\0'){
                    if(note1[i] != note2[i]){
                        printf("\nNotes Are Different\n\n");
                        break;
                    }
                    i++;

                }
                if(note1[i] == '\0' && note2[i] == '\0'){
                    printf("\nBoth Notes Are Same \n\n");

                }
                break;
            case 4:
                printf("\n\nEnter Note one to copy from: ");
                scanf(" %[^\n]",&note1);
                printf("\n\nCopying  note to another note...");
                i=0;
                // for copy
                while(note1[i] != '\0'){
                    note2[i] = note1[i];
                    i++;
                }

                note2[i] = '\0';

                printf("\n\nCopied Successfully !\n\n");
                printf("%s\n\n",note2);
                break;
            case 5:

                printf("\n\nEnter Note one to copy from: ");
                scanf(" %[^\n]",&note1);
                printf("\nEnter Note two to copy : ");
                scanf(" %[^\n]",&note2);

                // length of second string

                for(int i = 0; note2[i] != '\0'; i++){
                    len++;
                }

                i=0;
                // concatenation

                while(note1[i] != '\0'){
                    note2[ len + i] = note1[i];
                    i++;
                }

                note2[len + i] = '\0';
            
                printf("\n\nConcatenation Over !\n\n");
                printf("Note : %s\n\n",note2);
                break;
        }

    }while(choice != 6);    
    
    printf("\n24DIT063_Aubaid Ahmed\n\n");
    return 0;



}


