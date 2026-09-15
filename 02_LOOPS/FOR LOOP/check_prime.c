#include <stdio.h>

int main() {
    int num;
    int isPrime = 1; // 1 means True (Prime), 0 means False (Not Prime)

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0, 1, and negative numbers are not prime numbers
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Loop from 2 up to num/2 to look for factors
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0; // Factor found, so it is not prime
                break;       // Exit the loop early to save time
            }
        }
    }

    // Print the final result
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
