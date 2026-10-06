#include<stdio.h>
int main()
{
    int marks[5];
    for(int i=0;i<=4;i++)
    {
        printf("enter the marks %d \n:",i+1);
        scanf("%d",&marks[i]);

    }
    for(int i=4;i>=0;i--)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
}