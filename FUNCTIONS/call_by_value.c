#include <stdio.h>

// Function accepts a copy of the value
void squareValue(int num) {
    num = num * num;
    printf("Inside function: %d\n", num);
}

int main() {
    int n = 5;
    printf("Before function call: %d\n", n);
    
    // Passing the actual value
    squareValue(n); 
    
    printf("After function call: %d\n", n); // Original remains unchanged
    return 0;
}
