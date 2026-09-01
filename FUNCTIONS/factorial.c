#include <stdio.h>

// Function definition
long long findFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact; // Returning the computed result
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        long long result = findFactorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }
    return 0;
}
