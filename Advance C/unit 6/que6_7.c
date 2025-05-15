#include <stdio.h>

// Define the Date structure
struct Date {
    int month;
    int day;
};

int main() {
    struct Date date1, date2;

    printf("\nEnter the first date (mm dd): ");
    scanf("%d %d", &date1.month, &date1.day);

    printf("\nEnter the second date (mm dd): ");
    scanf("%d %d", &date2.month, &date2.day);

    // Validate month values
    if (date1.month < 1 || date1.month > 12 || date2.month < 1 || date2.month > 12) {
        printf("Invalid month entered. Please enter a month between 1 and 12.\n");
        return 1;
    }

    // Array of month names (note: use 'const char*' to avoid warnings in C++)
    const char* monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    printf("\nMonth names for the given dates:\n");
    printf("Date 1: %s %d\n", monthNames[date1.month - 1], date1.day);
    printf("Date 2: %s %d\n", monthNames[date2.month - 1], date2.day);

    return 0;
}