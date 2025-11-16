#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("myfile.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        exit(1);
    }

    printf("Enter text to write into the file:\n");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File created and text written successfully.\n");

    return 0;
}