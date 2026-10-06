#include<stdio.h>
int main()
{
    char ch[100];
    int i=0;
    char str[100];
    printf("input : ");
    while((ch[i]=getchar())!='\n')
    {
        i++;
    }
    ch[i]='\0';
    for(int a=0;a<i;a++)
    {
        str[a]==ch[i-a-1];
    }
    str[i]='\0';
    printf("output : %s",str);
    return 0;

}