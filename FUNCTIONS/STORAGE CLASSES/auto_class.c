#include <stdio.h>

void myFunction() {
    int x = 5; // This is 'auto' by default. 
    x++;
    printf("x = %d\n", x);
}

int main() {
    myFunction(); // Prints x = 6
    // printf("%d", x); // ERROR: x is dead now. You cannot use it here.
    return 0;
}
