#include <stdio.h>

// Define the Car structure
struct Car {
    int carID;
    char model[50];
    float rentalRatePerDay;
};

int main() {
    struct Car cars[3]; // Array of 3 Car structures
    int i, numDays;
    float totalCost = 0.0;

    printf("Enter details for 3 cars:\n");

    // Input data for each car
    for (i = 0; i < 3; ++i) {
        printf("\nCar %d:\n", i + 1);

        printf("Enter car ID: ");
        scanf("%d", &cars[i].carID);

        printf("Enter model: ");
        scanf("%s", cars[i].model);

        printf("Enter rental rate per day: ");
        scanf("%f", &cars[i].rentalRatePerDay);
    }

    printf("\nEnter the number of rental days: ");
    scanf("%d", &numDays);

    // Calculate total rental cost
    for (i = 0; i < 3; ++i) {
        totalCost += cars[i].rentalRatePerDay * numDays;
    }

    printf("\nTotal rental cost for %d days: $%.2f\n", numDays, totalCost);

    return 0;
}
