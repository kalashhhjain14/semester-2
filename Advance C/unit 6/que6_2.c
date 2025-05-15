#include <stdio.h>

// Define the Employee structure
struct Employee {
    int empId;
    char empName[50];
    char empDepartment[50];
    char empDesignation[50];
};

int main() {
    struct Employee emp; // Declare a variable of type 'struct Employee'

    // Get input from the user
    printf("Enter employee details:\n");
    printf("Employee ID: ");
    scanf("%d", &emp.empId);
    printf("Employee Name: ");
    scanf("%s", emp.empName);
    printf("Employee Department: ");
    scanf("%s", emp.empDepartment);
    printf("Employee Designation: ");
    scanf("%s", emp.empDesignation);

    // Display the employee details
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.empId);
    printf("Name: %s\n", emp.empName);
    printf("Department: %s\n", emp.empDepartment);
    printf("Designation: %s\n", emp.empDesignation);

    return 0;
}
