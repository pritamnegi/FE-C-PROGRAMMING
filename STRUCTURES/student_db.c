#include <stdio.h>

// Defining the structure
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Creating an array of structures
    struct Student s[n];

    // Inputting data
    for(i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Displaying data
    printf("\n--- Student Records ---\n");
    printf("Roll No\t\tName\t\tMarks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }

    return 0;
}
