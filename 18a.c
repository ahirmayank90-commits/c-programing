#include <stdio.h>
int main()
{
    int x = 0;
       if(x<<0) printf("cond 1!\n");
    
       else if(x>>1) printf("cond 2!\n");
       
       else printf("no cond match!\n");
       
       printf("every thing is ok!\n");
}