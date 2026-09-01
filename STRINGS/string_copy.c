#include <stdio.h>

int main() {
    char source[100];
    char destination[100];
    int i;

    printf("Enter a word to copy: ");
    scanf("%s", source);

    // Copy character by character
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }

    // Crucial step: Add the end marker to the new string
    destination[i] = '\0'; 

    printf("Copied String: %s\n", destination);
    return 0;
}
