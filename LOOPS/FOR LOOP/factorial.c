#include <stdio.h>

int main() {
    int num;
    int factorial = 1; // Initialized to 1 using standard int

    // Prompt user for input
    printf("Enter a positive integer (0 to 12): ");
    scanf("%d", &num);

    // Validation for negative numbers
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        // For loop to calculate factorial
        for (int i = 1; i <= num; ++i) {
            factorial = factorial * i; 
        }
        
        // Print the final result
        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}
