#include <stdio.h>
int main()
{
    int i;
    printf("enter the value of i :");
    scanf("%d",& i);
    do
    {
        printf("\n%d",i);
        i = i + 1;
    }while(i < 100);
}