#include <stdio.h>

int main() {
    int num,*ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num; // Pointer points to the address of 'num'

    if (*ptr < 0)
        printf("You entered a negative number.");
    else if (*ptr > 0)
        printf("You entered a positive number.");
    else
        printf("You entered 0.");

    return 0;
}
