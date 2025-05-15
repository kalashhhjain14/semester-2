#include <stdio.h>

// Define the Course structure
struct Course {
    int courseNo;
    char courseName[50];
    char courseDescription[100];
};

int main() {
    struct Course course; // Declare a variable of type 'struct Course'

    // Get input from the user
    printf("Enter course details:\n");
    printf("Course Number: ");
    scanf("%d", &course.courseNo);
    printf("Course Name: ");
    scanf("%s", course.courseName);
    printf("Course Description: ");
    scanf("%s", course.courseDescription);

    // Display the course details
    printf("\nCourse Details:\n");
    printf("Course Number: %d\n", course.courseNo);
    printf("Course Name: %s\n", course.courseName);
    printf("Course Description: %s\n", course.courseDescription);

    return 0;
}
