#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open file in read mode
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    // Move to 3rd character (index 2, since index starts from 0)
    fseek(file, 2, SEEK_SET);

    // Read and print the rest of the file
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
