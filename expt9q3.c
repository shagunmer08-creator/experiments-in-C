#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("output.txt", "r");

    if (fp == NULL) {
        printf("Error: File cannot be opened or does not exist!\n");
        return 1;
    }

    printf("File content:\n");


    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp); 
    return 0;
}