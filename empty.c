#include<stdio.h>
int main()
{
    const int n=5;
    float a,b,c,d,e;
    scanf("%f %f %f %f %f",&a, &b, &c, &d, &e);
    printf("a plus b minus c plus d plus e is equal to %d",a+b-c+d+e);
    if(n>10)
    {
        printf("n is constant we can not modified it's value and this constant value is less than 10");
    }
    return 0;
} 