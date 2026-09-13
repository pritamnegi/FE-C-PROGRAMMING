#include <stdio.h>

// 1. Defining the structure
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // 2. Declaring an array of structures
    struct Student s[n];

    printf("\n--- Enter Student Details ---\n");
    // 3. Reading data into the array of structures using a loop
    for(i = 0; i < n; i++) {
        printf("\nFor Student %d:\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        
        printf("Enter Name: ");
        // %s reads a single word. Using standard scanf for first-year simplicity.
        scanf("%s", s[i].name); 
        
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n\n--- Displaying Student Details ---\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("---------------------------------------------\n");
    
    // 4. Accessing and printing data from the array of structures
    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }

    return 0;
}
