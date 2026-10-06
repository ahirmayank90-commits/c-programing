#include <stdio.h>

int main()
{
    int n;
    int c;
    printf("please enter the value of n : \n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            c = n;
            printf("given number is the not prime\n");
            goto here;
        }
    }
here:
    if (!(c == n))
    {
        printf("given number is prime\n");
    }

    return 0;
}