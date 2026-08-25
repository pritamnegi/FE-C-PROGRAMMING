#include <stdio.h>

int main() {
    int num;
    int remainder;
    int sum = 0; // Starts at 0 to keep an accurate running total

    // 1. Get input from the user
    printf("Enter a positive number: ");
    scanf("%d", &num);

    // 2. Error check: make sure the number is positive
    if (num <= 0) {
        printf("Please enter a positive number greater than 0.\n");
    } 
    else {
        // 3. The while loop runs as long as num is greater than 0
        while (num > 0) {
            remainder = num % 10;   // Step A: Grab the last digit (e.g., 123 becomes 3)
            sum = sum + remainder;  // Step B: Add that digit to our total sum
            num = num / 10;         // Step C: Cut off the last digit (e.g., 123 becomes 12)
        }

        // 4. Print the final total sum
        printf("The sum of the digits is: %d\n", sum);
    }

    return 0;
}
