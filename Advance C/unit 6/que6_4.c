#include <stdio.h>

// Define the Salary structure
struct Salary {
    char empName[50];
    float basicSalary;
    float HRA;
    float DA;
    float totalSalary;
};

int main() {
    struct Salary emp; // Declare a variable of type 'struct Salary'

    // Get input from the user
    printf("Enter employee name: ");
    scanf("%s", emp.empName);
    printf("Enter basic salary: ");
    scanf("%f", &emp.basicSalary);

    // Calculate HRA and DA
    emp.HRA = 0.25 * emp.basicSalary;
    emp.DA = 0.10 * emp.basicSalary;

    // Calculate total salary
    emp.totalSalary = emp.basicSalary + emp.HRA + emp.DA;

    // Display the employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.empName);
    printf("Basic Salary: %.2f\n", emp.basicSalary);
    printf("HRA: %.2f\n", emp.HRA);
    printf("DA: %.2f\n", emp.DA);
    printf("Total Salary: %.2f\n", emp.totalSalary);

    return 0;
}
