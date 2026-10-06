#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of the x ");
    scanf("%d",&x);
    x=x>>1;
    (x&1)?printf("second binary digit is 1"):printf("second binary digit is 0");
    return 0;
}