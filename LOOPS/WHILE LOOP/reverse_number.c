#include <stdio.h>

int main() {
    int num;
    int remainder;
    int reverse = 0; // Starts at 0 to build our reversed number

    // 1. Get input from the user
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // 2. Save the original number to display in the final print statement
    int originalNum = num;

    // 3. The while loop runs until num becomes 0
    while (num != 0) {
        remainder = num % 10;                // Step A: Grab the last digit
        reverse = (reverse * 10) + remainder; // Step B: Push existing digits left and add the new digit
        num = num / 10;                      // Step C: Cut off the last digit
    }

    // 4. Print the final reversed number
    printf("The reverse of %d is: %d\n", originalNum, reverse);

    return 0;
}
