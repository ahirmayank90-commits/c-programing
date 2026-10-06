#include<stdio.h>
int  main()
{
    int a,b;
    printf("enter the value of a and b = ");
    scanf("%d %d",&a, &b);
    do
    {
        if(a>b)
        {
            a=a-b;
        }
        else if(b>a)
        {
            b=b-a;
        }

    }while(a!=b);
    printf("gcd is = %d",a);
    return 0;
}