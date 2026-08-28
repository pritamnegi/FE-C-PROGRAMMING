#include <stdio.h>

// Function declaration
float fahrenheitToCelsius(float fahrenheit);

int main() {
    float fahr, cel;

    // Prompt user for input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahr);

    // Call the function to perform conversion
    cel = fahrenheitToCelsius(fahr);

    // Print the result with 2 decimal places
    printf("%.2f°F is equal to %.2f°C\n", fahr, cel);

    return 0;
}

// Function definition to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    // Formula: (F - 32) * 5 / 9
    // Using 5.0 and 9.0 prevents integer division truncation
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
