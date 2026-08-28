#include <stdio.h>

// Global variable declaration
// Accessible by any function in this file
int num = 100; 

void checkVariables() {
    // Local variable unique to checkVariables()
    int local_var = 20; 
    
    printf("--- Inside checkVariables() ---\n");
    printf("Global num      = %d\n", num);
    printf("Local local_var = %d\n\n", local_var);
}

int main() {
    // Local variable unique to main()
    int main_local = 10; 
    
    // Local variable with the SAME name as the global variable
    // This hides/shadows the global variable inside main()
    int num = 500; 

    printf("--- Inside main() ---\n");
    printf("Local main_local        = %d\n", main_local);
    printf("Local num (shadows global) = %d\n\n", num);

    // Call the external function
    checkVariables();

    return 0;
}
