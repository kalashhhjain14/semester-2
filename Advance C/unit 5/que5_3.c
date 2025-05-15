#include <stdio.h>

void incrementInteger(int *num) {
    // Post-increment: Increment the value pointed by 'num'
    (*num)++;

    // Pre-increment: Increment the value pointed by 'num' again
    ++(*num);
}

int main() {
    int num;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the function to increment the integer
    incrementInteger(&num);

    // Display the updated value
    printf("Updated value: %d\n", num);

    return 0;
}
