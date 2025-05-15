#include <stdio.h>

#define PI 3.14159

int main() {
    float radius;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Area of circle\n");
        printf("2. Print the address of radius\n");
        printf("3. Circumference of circle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                float area = PI * radius * radius;
                printf("Area of the circle: %.2f\n", area);
                break;
            }
            case 2: {
                printf("Address of radius: %p\n", (void *)&radius);
                break;
            }
            case 3: {
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                float circum = 2 * PI * radius;
                printf("Circumference of the circle: %.2f\n", circum);
                break;
            }
            case 4: {
                printf("Exiting...\n");
                break;
            }
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}
