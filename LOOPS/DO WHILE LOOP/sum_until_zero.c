/*
Sum of Numbers Until User Enters Zero 
The program keeps adding user inputs together until the user passes 0 to signal they are finished.
*/

#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Enter integers to add them up (Enter 0 to stop):\n");

    do {
        printf("Enter a number: ");
        scanf("%d", &number);
        
        sum = sum + number; // Add the current number to the running total
    } while (number != 0); // Stop immediately if the user inputs 0

    printf("\nThe final total sum is: %d\n", sum);
    return 0;
}
