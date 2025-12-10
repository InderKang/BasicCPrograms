//inderpreet
// file operations in c
#include <stdio.h>
#include <stdlib.h> 

int main() {
    FILE *fptr;
    char text[100];

    // Writing to a file
    fptr = fopen("example.txt", "w");
    fprintf(fptr, "Hello, C File Operations!\n");
    fclose(fptr);

    // Reading from a file
    fptr = fopen("example.txt", "r");
    fgets(text, sizeof(text), fptr);
    printf("Content from file: %s", text);
    fclose(fptr);
}