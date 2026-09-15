/*
Input Validation (Forcing Positive Inputs)
Engineers must build robust code. 
This program uses a do-while loop to repeatedly demand input until the user provides a valid, positive integer.
*/

#include <stdio.h>

int main() {
    int age;

    // The loop forces the block to run at least once to grab initial input
    do {
        printf("Enter your age (must be greater than 0): ");
        scanf("%d", &age);

        if (age <= 0) {
            printf("Error: Age cannot be zero or negative!\n\n");
        }
    } while (age <= 0); // Keep looping if the input is invalid

    printf("Valid age entered successfully: %d\n", age);
    return 0;
}
