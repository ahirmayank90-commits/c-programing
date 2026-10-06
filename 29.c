# include<stdio.h>
int main()
{
    int a , b;
    printf("enter the value of the a :\n");
    scanf("%d",&a);
    printf("enter the value of the b :\n");
    scanf("%d",&b);
    if(a%2==1)
    {
        printf("the a is odd number\n");
    }
    else
    {
       printf("the a is even number\n"); 
    }
    if(b%2==1)
    {
        printf("the b is odd number\n");
    }
    else
    {
       printf("the b is even number\n"); 
    }

    return 0;
}