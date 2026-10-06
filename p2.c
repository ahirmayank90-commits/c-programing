#include <stdio.h>
int main()
{
    int a,b;
    printf("hello\nwell come to this page.\nenter the value we can say given value are same or different:");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("\ngiven value same");
    }
    else
    {
        printf("\ngiven value not same");
    }
}