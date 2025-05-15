#include <stdio.h>

// Define a union to store employee data
union Employee {
    int emp_id;
    char emp_name[50];
    float emp_salary;
};

int main() {
    union Employee emp1;

    // Input employee details
    printf("Enter the employee ID: ");
    scanf("%d", &emp1.emp_id);

    printf("Enter the employee name: ");
    scanf("%s", emp1.emp_name);

    printf("Enter the employee salary: ");
    scanf("%f", &emp1.emp_salary);

    // Display entered employee details
    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", emp1.emp_id);
    printf("Employee Name: %s\n", emp1.emp_name);
    printf("Employee Salary: %.2f\n", emp1.emp_salary);

    return 0;
}
