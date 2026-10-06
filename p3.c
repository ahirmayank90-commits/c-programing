#include <stdio.h>
int main()
{
    int a=1,b=1;
    if(!(a&b)==0)
    {
        printf("both value are false or one value is true and other is false");
    }
    else
    {
        printf("both value are true");
    }
}