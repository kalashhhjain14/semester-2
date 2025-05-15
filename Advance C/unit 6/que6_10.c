#include <stdio.h>

// Define the Vehicle structure
struct Vehicle {
    int VehicleID;
    char vehicle_brandname[50];
    float vehicle_price;
};

// Function to display vehicles with price greater than 25000
void displayExpensiveVehicles(struct Vehicle vehicles[], int numVehicles) {
    printf("Expensive Vehicles (Price > 25000):\n");
    for (int i = 0; i < numVehicles; ++i) {
        if (vehicles[i].vehicle_price > 25000) {
            printf("Vehicle ID: %d, Brand: %s, Price: %.2f\n",
                   vehicles[i].VehicleID, vehicles[i].vehicle_brandname, vehicles[i].vehicle_price);
        }
    }
}

int main() {
    struct Vehicle vehicles[10]; // Array of 10 Vehicle structures
    int i;

    printf("Enter details for 10 vehicles:\n");

    // Input data for each vehicle
    for (i = 0; i < 10; ++i) {
        printf("\nVehicle %d:\n", i + 1);

        printf("Enter Vehicle ID: ");
        scanf("%d", &vehicles[i].VehicleID);

        printf("Enter brand name: ");
        scanf("%s", vehicles[i].vehicle_brandname);

        printf("Enter price: ");
        scanf("%f", &vehicles[i].vehicle_price);
    }

    // Display expensive vehicles
    displayExpensiveVehicles(vehicles, 10);

    return 0;
}
