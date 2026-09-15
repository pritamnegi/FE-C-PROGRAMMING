#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int match = 1; // 1 means they are equal, 0 means different

    printf("Enter first word: ");
    scanf("%s", str1);
    printf("Enter second word: ");
    scanf("%s", str2);

    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        // If any character doesn't match, they are not equal
        if (str1[i] != str2[i]) {
            match = 0; 
            break; // Exit loop early
        }
    }

    if (match == 1) {
        printf("Strings are equal!\n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;
}
