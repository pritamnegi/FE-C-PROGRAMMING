#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num > 12) {
        // 13! exceeds the storage capacity of a standard 32-bit int
        printf("Result too large for 'int' variable! Please enter 12 or less.\n");
    } else {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }

    return 0;
}

// Recursive function using int
int factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}
