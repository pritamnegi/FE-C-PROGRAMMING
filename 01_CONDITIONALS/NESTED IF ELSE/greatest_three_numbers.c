#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Ask the user to enter three integer numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Outer if-else block
    if (num1 >= num2) 
    {
        // Inner if-else block 1
        if (num1 >= num3) 
		{
            printf("%d is the greatest number.\n", num1);
        } else 
		{
            printf("%d is the greatest number.\n", num3);
        }
    } 
	else 
	{
        // Inner if-else block 2
        if (num2 >= num3) 
		{
            printf("%d is the greatest number.\n", num2);
        } 
		else 
		{
            printf("%d is the greatest number.\n", num3);
        }
    }

    return 0;
}
