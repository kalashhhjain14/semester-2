#include <stdio.h>

// Define the Circle structure
struct Circle {
    double radius;
};

int main() {
    struct Circle circle1, circle2;

    // Input details for the first circle
    printf("Input details for Circle 1:\n");
    printf("Radius: ");
    scanf("%lf", &circle1.radius);

    // Input details for the second circle
    printf("\nInput details for Circle 2:\n");
    printf("Radius: ");
    scanf("%lf", &circle2.radius);

    // Calculate area and perimeter for Circle 1
    double area1 = 3.14159 * circle1.radius * circle1.radius;
    double perimeter1 = 2 * 3.14159 * circle1.radius;

    // Calculate area and perimeter for Circle 2
    double area2 = 3.14159 * circle2.radius * circle2.radius;
    double perimeter2 = 2 * 3.14159 * circle2.radius;

    // Display results for both circles
    printf("\nCircle 1:\n");
    printf("Area: %.2lf\n", area1);
    printf("Perimeter: %.2lf\n", perimeter1);

    printf("\nCircle 2:\n");
    printf("Area: %.2lf\n", area2);
    printf("Perimeter: %.2lf\n", perimeter2);

    return 0;
}
