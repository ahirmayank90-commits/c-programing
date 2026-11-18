#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p,n;
    printf("enter the size : ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(n<=0){
        printf("please enter the applicable value of n !!");
        return 1;
    }
    if(p==NULL){
        return 1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++){
        printf("%d \n",*(p+i));
    }
    free(p);
    return 0;
}