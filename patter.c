#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            if (j >= i)
            {
                printf(" %d ", i);
            }
            else
            {
                printf(" %d ", j);
            }
        }
        for (int j = n / 2 - 1; j >= 0; j--)
        {
            if (j >= i)
            {
                printf(" %d ", i);
            }
            else
            {
                printf(" %d ", j);
            }
        }

        printf("\n");
    }
    for (int a = n / 2 - 1; a >= 0; a--)
    {
        for (int b = 0; b < n / 2; b++)
        {
            if (b >= a)
            {
                printf(" %d ", a);
            }
            else
            {
                printf(" %d ", b);
            }
        }
        for (int b = n / 2 - 1; b >= 0; b--)
        {
            if (b >= a)
            {
                printf(" %d ", a);
            }
            else
            {
                printf(" %d ", b);
            }
        }

        printf("\n");
    }
    return 0;
}