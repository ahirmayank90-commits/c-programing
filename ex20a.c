#include<stdio.h>
int main()
{
    
    for(int i=1;i<=4;i++)
    {
        for(int col=1;col<=i;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
