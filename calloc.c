#include <stdio.h>
#include<stdlib.h>

int main() {
    int *p,*temp;
    p=(int *)calloc(1,sizeof(int));
    if(p==NULL)
        return 1;
    *p=5;
    temp=(int *)realloc(p,sizeof(int));
    *(p+1)=10;
    printf("%d %d",*(p),*(p+1));
    free(p);
    return 0;
}