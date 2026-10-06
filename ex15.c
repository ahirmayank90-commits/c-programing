#include <stdio.h>
int main(){
    int a,b,m,p,q;
    printf("enter two digit you have to find gcd :");
    scanf("%d %d",&a,&b);
    p=a,q=b;
    if(a>b)
    {
        int r;b=r,b=a,a=r;
    }
    while((b%a)!=0)
    {
        m=b%a;
        b=a,a=m;
    }
    printf("gcd(%d,%d) is equal to %d",p,q,m);
    return 0;
}