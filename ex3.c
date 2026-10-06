#include<stdio.h>
int main()
{
    int N,sum=0;
    printf("enter the number N to find the sum of the first N natural number's sum = ");
    scanf("%d",&N);
    for(int i=0;i<=N;i++)
    {
        sum=sum+i*i*i;

    }
    printf("sum=%d",sum);
    return 0;
}