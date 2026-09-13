#include <stdio.h>
#include <string.h>

// Define a structure for a student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

// Function declarations
void displayStudent(struct Student s);
void searchStudent(struct Student s[], int n, int targetRoll);
void updateStudent(struct Student s[], int n, int targetRoll);

int main() {
    int n, choice, roll;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n]; // Array of structures

    // 1. Input/Creation operation
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // 2. Traversal/Display operation
    printf("\n--- Displaying All Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        displayStudent(students[i]);
    }

    // 3. Search operation
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);
    searchStudent(students, n, roll);

    // 4. Update operation
    printf("\nEnter Roll Number to update marks: ");
    scanf("%d", &roll);
    updateStudent(students, n, roll);

    // Display updated records
    printf("\n--- Displaying Records After Update ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        displayStudent(students[i]);
    }

    return 0;
}

// Function to display a single student's details
void displayStudent(struct Student s) {
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

// Function to search for a student by roll number
void searchStudent(struct Student s[], int n, int targetRoll) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].rollNo == targetRoll) {
            printf("\nStudent Found!\n");
            displayStudent(s[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent with Roll Number %d not found.\n", targetRoll);
    }
}

// Function to update a student's marks by roll number
void updateStudent(struct Student s[], int n, int targetRoll) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].rollNo == targetRoll) {
            printf("Enter new marks for %s: ", s[i].name);
            scanf("%f", &s[i].marks);
            printf("Marks updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent with Roll Number %d not found for update.\n", targetRoll);
    }
}
