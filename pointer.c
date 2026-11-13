#include<stdio.h>
int main(){
    int a=120;
    int *ptra=&a;
    printf("the value of a is : %d\n",a);      //value of a direct using a
    printf("the value of a is : %d\n",*ptra);  //derefernces of the pointer
    printf("the address of a is : %x\n",ptra);  //address of variable using pointer in hexadecimal format
    printf("the address of a is : %X\n",ptra); 
    printf("the address of a is : %p\n",ptra);
    printf("the address of a is : %p\n",&ptra);  //address of pointer of a variable
    return 0;


}