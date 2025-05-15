#include <stdio.h>

int great(int *x, int size)
{
    int large = x[0];
   
    for (int i = 1; i < size; i++)
    {
        if (x[i] > large)
        {
            large = x[i];
        }
    }
     
    return large;
}

int main()
{
    int a[10];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    int res = great(a, 5);

    printf("%d is the largest number\n", res);
    
    return 0;
}
