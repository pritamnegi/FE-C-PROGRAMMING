#include <stdio.h>

int main() {
    int n;
    int t1 = 0; // First term
    int t2 = 1; // Second term
    int nextTerm;

    // Prompt user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Error handling for zero or negative inputs
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("Fibonacci Sequence: ");

        // Loop to generate and print each term
        for (int i = 1; i <= n; ++i) {
            // Print the current term followed by a space
            printf("%d ", t1);

            // Calculate the next term and shift variables forward
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("\n"); // Move to a new line at the end
    }

    return 0;
}
