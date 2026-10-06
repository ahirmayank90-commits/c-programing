#include<stdio.h>
#include<string.h>
int main()
{
    char name[100]="mayank", surname[100]="ahir";
    
    strcat(name,surname);
    printf("%s",name);
    printf("\n%d",strlen(name));
    printf("\n%s",name);
    return 0;
}
