#include <stdio.h>

int main() {
    int num, remainder;
    int reverse = 0; // Stores the reversed number

    // 1. Get input from the user
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // 2. Save the original number before we modify it in the loop
    int originalNum = num;

    // 3. Reverse the number using a while loop
    while (num > 0) {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num = num / 10;
    }

    // 4. Compare the original number with the reversed number
    if (originalNum == reverse) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
