#include <stdio.h>
int main()
{
    int a;
    float b;
    char m;
    printf("enter the value of int a, float b and char c =");
    scanf("%d%f%c",&a,&b,&m);
    printf("\nthe size of int a is = %d", sizeof(a));
    printf("\nthe size of float b is =% d", sizeof(b));
    printf("\nthe size of char c is = %d", sizeof(m));


}