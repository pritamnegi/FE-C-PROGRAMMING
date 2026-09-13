#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Open source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file. Please create 'source.txt' first.\n");
        exit(1);
    }

    // Open destination file in write mode
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(sourceFile);
        exit(1);
    }

    // Character-by-character copy loop
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully!\n");

    // Close both files to release resources
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
