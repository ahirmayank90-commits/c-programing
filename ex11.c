#include<stdio.h>
int main()
{
    int a=1,b=1,c=5555;
    a++;
    ++b;
    c+=a;
    if((a<b)&&(b>c))
    {
        printf("%d %d %04d", a,b,c);
    }
    else
    {
        printf("%03d %5d %26d",a,b,c);
    }
    return 0;
}