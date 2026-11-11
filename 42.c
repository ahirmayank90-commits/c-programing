
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a[] = {10, 5, 20, 8, 20, 15};
    int n = sizeof(a) / sizeof(a[0]);

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > second)
        {
            second = a[i];
        }
    }

    if (second == INT_MIN)
        printf("No second-largest distinct element\n");
    else
        printf("Second largest = %d\n", second);

    return 0;
}

