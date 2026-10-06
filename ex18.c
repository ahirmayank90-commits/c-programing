#include <stdio.h>

int main(){

    printf("Mayank Ahir\n");
    int n=59,i=2;
    
    while(i<=n)
    {
        if(i==n)
        {
            printf("number is prime");
            break;
        }
        if(n%i==0)
        {
            printf("number is not prime\n");
            return 0;
        }
        i++;
        
    }

    return 0;
}