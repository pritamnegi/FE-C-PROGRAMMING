#include <stdio.h>

/* 1. FUNCTION DECLARATION (Prototype)
   Tells the compiler that a function named 'calculateArea' exists, 
   takes two integers, and returns an integer. */
int calculateArea(int length, int width);


int main() {
    int l, w, area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &w);

    /* 2. FUNCTION CALL
       Passes the integer values of 'l' and 'w' into the function. */
    area = calculateArea(l, w);

    printf("The area of the rectangle is: %d\n", area);

    return 0;
}


/* 3. FUNCTION DEFINITION
   Contains the actual logic to multiply the numbers and return the result. */
int calculateArea(int length, int width) {
    int result;
    
    result = length * width; // Core calculation
    
    return result; // Sends the answer back to main()
}
