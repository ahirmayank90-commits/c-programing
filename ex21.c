#include<stdio.h>
int main()
{
    int n=8,a=0,b=1,sum=0;
    printf("0  1  ");
    for(int i=0;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d  ", sum);
        
        
    }
    return 0;
}
