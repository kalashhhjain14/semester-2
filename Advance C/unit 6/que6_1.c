#include <stdio.h>

// Define the student structure
struct Student {
    int rollno;
    char name[50];
    char course[50];
    char gender;
};

int main() {
    struct Student student; // Declare a variable of type 'struct Student'

    // Get input from the user
    printf("Enter student details:\n");
    printf("Roll number: ");
    scanf("%d", &student.rollno);
    printf("Name: ");
    scanf("%s", student.name);
    printf("Course: ");
    scanf("%s", student.course);
    printf("Gender (M/F): ");
    scanf(" %c", &student.gender); // Note the space before %c to consume any newline character

    // Display the student details
    printf("\nStudent Details:\n");
    printf("Roll number: %d\n", student.rollno);
    printf("Name: %s\n", student.name);
    printf("Course: %s\n", student.course);
    printf("Gender: %c\n", student.gender);

    return 0;
}
