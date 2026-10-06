#include<stdio.h>
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int m=0;m<=(3-i);m++)
        {
            printf(" ");
        }
        printf("*");
        if(i!=0)
        {
            for(int a=1;a<=(2*i-1);a++)
            {
               printf(" ");
               
            }
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<(n-1);i++)
    {
        for(int m=0;m<=i;m++)
        {
            printf(" ");
        }
        printf("*");
        if(i!=(n-2))
        {
            for(int m=0;m<(4-2*i);m++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}