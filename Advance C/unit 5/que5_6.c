#include <stdio.h>

int main() {
    int num1, num2, *p1, *p2, product;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Pointers to the input numbers
    p1 = &num1;
    p2 = &num2;

    // Calculate the product
    product = (*p1) * (*p2);

    printf("Product of %d and %d is %d\n", *p1, *p2, product);

    return 0;
}
