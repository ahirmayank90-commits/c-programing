#include <stdio.h>
int main()
{
    int N,sum=0,fact=1;
    printf("enter the value of the N :");
    scanf("%d",&N);
    for(int i=0;i<=N;i++)
    {
        sum=sum+i;
    }
    for(int a=1;a<=N;a++)
    {
        fact=fact*a;
    }
    printf("N factorial is %d",fact);
    printf("\n");
    printf("sum of the first N natural number is %d",sum);
    return 0;
}