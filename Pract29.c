// This program is prepared by 24dit063_Aubaid Ahmed
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    // using calloc()
    char *str = (char *)calloc(20, sizeof(char)); // Allocates memory for 20 characters
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // storing string 
    strcpy(str, "Hello!");
    printf("\nInitial string: %s\n", str);

    // using realloc()
    str = (char *)realloc(str, 50 * sizeof(char)); // increase memory to 50 characters
    if (str == NULL) {
        printf("Memory reallocation failed!\n");
        return ;
    }

    // modifying string to larger one
    strcat(str, " Welcome to dynamic memory allocation.");
    printf("Modified string: %s\n", str);

    printf("\n24DIT063_Aubaid Ahmed\n\n");

}
