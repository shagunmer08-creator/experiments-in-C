#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Open file in write mode
    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter text to write into file: ");
    fgets(text, sizeof(text), stdin);

    // Write text into file
    fputs(text, fp);

    printf("File created and text written successfully!\n");

    fclose(fp); // Close the file
    return 0;
}