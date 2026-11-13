#include <stdio.h>
//basic concept of increasing pointer address
int main() {
    int a=102;
    int *ptra=&a;
    *ptra=*ptra+2;             //via derefrences we can change the value of varaible actually it show 
    printf("%d\n",*ptra);       //address via changing value address not change so increment value show by derefrences the pointer
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);
    printf("%d\n",ptra+2);
    return 0;
}