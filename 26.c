#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}

int main() {
    int a,b,c;
    a=20;
    b=30;
    c =sum(a,b);
    printf("\nthe sum is %d",c);
    
    return 0;
}