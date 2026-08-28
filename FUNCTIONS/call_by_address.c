#include <stdio.h>

// Function accepts a pointer (memory address)
void squareAddress(int *num) {
    *num = (*num) * (*num); // Dereferencing to modify original value
    printf("Inside function: %d\n", *num);
}

int main() {
    int n = 5;
    printf("Before function call: %d\n", n);
    
    // Passing the address of the variable
    squareAddress(&n); 
    
    printf("After function call: %d\n", n); // Original value is changed
    return 0;
}
