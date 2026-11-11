#include<stdio.h>
int swap(int* a, int* b){
    int n;
    n=*a;
    *a=*b;
    *b=n;
    return 0;
}

int main(){
    int a=4,b=6;
    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
    return 0;
}