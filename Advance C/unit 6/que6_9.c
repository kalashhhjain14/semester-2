#include <stdio.h>
#include <string.h>

// Define the Book structure
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[3]; // Array of 3 Book structures
    int i;

    printf("Enter details for 3 books:\n");

    // Input data for each book
    for (i = 0; i < 3; ++i) {
        printf("\nBook %d:\n", i + 1);

        printf("Enter title: ");
        scanf("%s", books[i].title);

        printf("Enter author: ");
        scanf("%s", books[i].author);

        printf("Enter price: ");
        scanf("%f", &books[i].price);
    }

    // Find the most expensive and lowest priced books
    struct Book mostExpensive, lowestPriced;
    mostExpensive = lowestPriced = books[0];

    for (i = 1; i < 3; ++i) {
        if (books[i].price > mostExpensive.price) {
            mostExpensive = books[i];
        }
        if (books[i].price < lowestPriced.price) {
            lowestPriced = books[i];
        }
    }

    printf("\nMost Expensive Book:\n");
    printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", mostExpensive.title, mostExpensive.author, mostExpensive.price);

    printf("\nLowest Priced Book:\n");
    }