#include<stdio.h>
#include<string.h>
int main()
{
    char name[50],tem;
    int str=0;
    printf("enter the string :");
    scanf("%s",name);
    int len=strlen(name);
    int end=len-1;
    while(str<end)
    {
        name[str]=tem;
        name[str]=name[end];
        name[end]=tem;
        str++;
        end--;
    }
    name[len]='\0';
    printf("\n%s",name);
    return 0;
}
