#include<stdio.h>


int fact(int n, int a){
    if(n<=1){
        return a;
    }
        return fact(n-1,n*a);
}

int main(){
    int  b=fact(3,1);
    printf("%d",b);
    return 0;
}
