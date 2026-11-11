#include <stdio.h>
//basic concept of increasing pointer address
int main() {
    int a=102;
    int *ptra=&a;
    *ptra=*ptra+2;
    printf("%d\n",*ptra);
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);
    printf("%d\n",ptra+2);
    return 0;
}