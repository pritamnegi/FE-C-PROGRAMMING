#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a word: ");
    scanf("%s", str); // Takes a single word as input

    // Loop through the array until we hit the null character
    for (int i = 0; i < 100; i++) {
        if (str[i] == '\0') {
            break; // Stop the loop immediately
        }
        length++; // Count the character
    }

    printf("The number of characters is: %d\n", length);
    return 0;
}
