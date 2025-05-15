#include <stdio.h>

int main() {
    int x, y, *p1, *p2, *largest;
    printf("Please Enter Two Different Values: ");
    scanf("%d %d", &x, &y);

    p1 = &x;
    p2 = &y;

    largest = (*p1 > *p2) ? p1 : p2;
    printf("The Largest of Two Numbers = %d\n", *largest);

    return 0;
}
