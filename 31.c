#include <stdio.h>
// this program is to find factorial of the number
int main()
{

    int n, c, i;
    c = 1;
    printf("enter the value of n\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        c = c * i;
    }
    printf("the factorial of the %d=%d\n", n, c);

    return 0; 
}