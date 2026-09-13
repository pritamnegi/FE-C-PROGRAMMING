#include <stdio.h>

// 1. Define the Inner Structure first
struct DateOfBirth {
    int day;
    int month;
    int year;
};

// 2. Define the Outer Structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
    
    // Nesting: Declaring a structure variable inside another structure
    struct DateOfBirth dob; 
};

int main() {
    // 3. Declare a structure variable
    struct Student s1;

    printf("--- Enter Student Details ---\n");
    
    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNo);
    
    printf("Enter Name (single word): ");
    scanf("%s", s1.name);
    
    printf("Enter Marks: ");
    scanf("%f", &s1.marks);
    
    // 4. Input values for the nested structure using double dot operators
    printf("Enter Date of Birth (DD MM YYYY format): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    // 5. Display the stored values
    printf("\n--- Displaying Student Details ---\n");
    printf("Roll Number   : %d\n", s1.rollNo);
    printf("Name          : %s\n", s1.name);
    printf("Marks         : %.2f\n", s1.marks);
    
    // Printing nested structure members
    printf("Date of Birth : %02d/%02d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}
