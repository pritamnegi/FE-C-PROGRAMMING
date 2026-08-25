#include <stdio.h>

int main() {
    int n1, n2, remainder;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    int originalN1 = n1;
    int originalN2 = n2;

    // Euclidean division logic
    do {
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    } while (remainder != 0); // Run until there is no remaining value

    // n1 now holds the GCD value
    printf("The GCD of %d and %d is: %d\n", originalN1, originalN2, n1);
    return 0;
}
