#include <stdio.h>

// Define a union to store student data
union Student {
    char firstName[50];
    int rollNumber;
    float marks;
};

int main() {
    union Student student; // Declare a single union variable

    printf("Enter student information:\n");
    
    printf("Enter first name: ");
    scanf("%s", student.firstName);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nDisplaying student information:\n");
    printf("First Name: %s\n", student.firstName);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.1f\n", student.marks);

    return 0;
}
