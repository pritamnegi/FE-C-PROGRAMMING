#include <stdio.h>

int main() {
    register int i; // Requesting fast CPU memory
    
    for(i = 1; i <= 3; i++) {
        printf("Loop round %d\n", i);
    }
    
    // Exam Note: You cannot use '&i' because CPU registers don't have RAM addresses!
    return 0;
}
