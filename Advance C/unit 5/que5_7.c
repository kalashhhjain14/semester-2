#include <stdio.h>
int main() {
    int n, i, max = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    for (i = 0; i < n; i++) {
        printf("Enter %d element: ", i + 1);
        scanf("%d", ptr + i);
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    printf("Largest element is %d", max);
    return 0;
}
