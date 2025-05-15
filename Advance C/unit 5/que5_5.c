#include <stdio.h>

void decrementInteger(int *num) {
    // Post-decrement: Decrement the value pointed by 'num'
    (*num)--;

    // Pre-decrement: Decrement the value pointed by 'num' again
    --(*num);
}

int main() {
    int num;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the function to decrement the integer
    decrementInteger(&num);

    // Display the updated value
    printf("Updated value: %d\n", num);

    return 0;
}
