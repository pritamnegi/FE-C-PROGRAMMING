#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop runs up to the current row number 'i'
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
