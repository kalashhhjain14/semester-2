#include <stdio.h>

// Define the Date structure DOB
struct Date {
    int day;
    int month;
    int year;
};

// Define the Address structure
struct Address {
    char street[100];
    char city[50];
};

// Define the Customer structure
struct Customer {
    char name[100];
    struct Date DOB;
    struct Address address;
    long long contactNo;
};

int main() {
    struct Customer customer;

    printf("Enter customer details:\n");
    printf("Name: ");
    scanf("%s", customer.name);

    printf("Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &customer.DOB.day, &customer.DOB.month, &customer.DOB.year);

    printf("Address (Street City): ");
    scanf("%s %s", customer.address.street, customer.address.city);

    printf("Contact number: ");
    scanf("%lld", &customer.contactNo);

    printf("\nCustomer Details:\n");
    printf("Name: %s\n", customer.name);
    printf("DOB: %d/%d/%d\n", customer.DOB.day, customer.DOB.month, customer.DOB.year);
    printf("Address: %s, %s\n", customer.address.street, customer.address.city);
    printf("Contact No: %lld\n", customer.contactNo);

    return 0;
}
