#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error opening file! Make sure the file exists.\n");
        exit(1);
    }

    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}