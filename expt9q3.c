#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("Error opening file! Make sure the file exists.\n");
        exit(1);
    }

    printf("File content:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}