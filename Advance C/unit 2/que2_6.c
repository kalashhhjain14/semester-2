#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer input than gets()

    // Print each character on a new line
    printf("Individual characters in the string:\n");
    while (str[i] != '\0') {
        // To avoid printing newline character added by fgets
        if (str[i] != '\n') {
            printf("%c\n", str[i]);
        }
        i++;
    }

    return 0;
}
