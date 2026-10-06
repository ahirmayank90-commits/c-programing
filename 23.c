#include <stdio.h>
int main()
{
    int m , j , k;
    printf("*table of 2*\n\n");
    for(m=2, j=1, k=2; m<10, j<11; j++, k=k+2)
    {
        printf("%d * %d = %d\n",m,j,k);
    }
}