#include <stdio.h>

int main(){

    printf("Mayank Ahir\n");
    char ch[50];
    printf("please enter the text : ");
    fgets(ch,50,stdin);
    printf("\nch = %s",ch);
    char name='A';
    putchar(name);


    return 0;
}