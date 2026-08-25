#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (int j = 1; j <= rows; j++) {
            printf("* ");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
