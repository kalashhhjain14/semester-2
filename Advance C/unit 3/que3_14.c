#include <stdio.h>

int main() {
    FILE *file;

    // Open file to write new name directly (overwrite)
    file = fopen("14.txt", "w");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    // Write new name with updated surname
    fprintf(file, "kalash jain\n");

    fclose(file);
    printf("Surname changed to shah.\n");
    return 0;
}
