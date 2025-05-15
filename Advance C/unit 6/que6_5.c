#include <stdio.h>

// Define the student structure
struct student {
    int roll;
    char name[50];
    char course[50];
    char gender;
};

int main() {
    struct student s[5]; // Array of 5 student structures
    int i;

    printf("Enter information for 5 students:\n");

    // Input data for each student
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number %d:\n", s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter course: ");
        scanf("%s", s[i].course);

        printf("Enter gender (M/F): ");
        scanf(" %c", &s[i].gender);
    }

    printf("\nDisplaying Student Information:\n");
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Course: %s\n", s[i].course);
        printf("Gender: %c\n", s[i].gender);
    }

    return 0;
}
