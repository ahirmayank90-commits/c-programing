#include<stdio.h>
int fun(int n)
{
    int count=0,result=0,sum=0;
    int a[100];
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a[count]=i;
            count=count+1;
        }
    }
    for(int i=0;i<count;i++)
    {
        sum=sum+a[i];
    }
    if(sum==n)
    {
        result=1;
    }
    return result;
}


int main()
{
    for(int i=2;i<100;i++)
    {
        if(fun(i)==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}