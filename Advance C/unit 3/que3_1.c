#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("example.txt", "r"); // Open the file in read mode

    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Read each character and display it
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
