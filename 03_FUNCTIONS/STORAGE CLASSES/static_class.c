#include <stdio.h>

void checkCount() {
    static int count = 0; // Runs ONLY ONCE. Holds its value.
    count++;
    printf("Count is %d\n", count);
}

int main() {
    checkCount(); // Prints: Count is 1
    checkCount(); // Prints: Count is 2
    checkCount(); // Prints: Count is 3
    return 0;
}
