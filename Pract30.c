// This program is prepared by 24dit063_Aubaid Ahmed
#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int fileSize;

    // Open file in read mode
    FILE *file = fopen("Demo.txt", "r");

    if (file == NULL) {
        printf("Could not open file! \n");
        return 1;
    }

    // move file pointer to end to determine file size
    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);

    printf("\nReversed Content:\n");

    // read characters from end of file and print them
    for (int i = fileSize - 1; i >= 0; i--) {
        fseek(file, i, SEEK_SET);  // move file pointer to position i
        char ch = fgetc(file);    // read character at position i
        if (ch != EOF) {
            putchar(ch);        
        }
    }
    printf("\n\n24DIT063_Aubaid Ahmed\n\n");
    fclose(file);

    return 0;
}
