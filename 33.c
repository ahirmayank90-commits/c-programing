#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a b and c :");
    scanf("%d %d %d",&a,&b,&c);
    (a>b && a>c)?printf("%d",a):printf("");
    (b>a && b>c)?printf("%d",b):printf("");
    (c>a && c>b)?printf("%d",c):printf("");
    return 0;

}