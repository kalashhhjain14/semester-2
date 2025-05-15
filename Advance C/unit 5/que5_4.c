#include <stdio.h>

int findSmallest(int *num1, int *num2) {
    return (*num1 < *num2) ? *num1 : *num2;
}

int main() {
    int num1, num2;
    printf("Enter the first integer number: ");
    scanf("%d", &num1);
    printf("Enter the second integer number: ");
    scanf("%d", &num2);

    int smallest = findSmallest(&num1, &num2);
    printf("%d is the smallest", smallest);

    return 0;
}
