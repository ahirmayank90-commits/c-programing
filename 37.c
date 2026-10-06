#include<stdio.h>
int main()
{
    char str[50],patrn[50];
    printf("enter the string : ");
    scanf("%s",str);
    printf("\nenter the pattern : ");
    scanf("%s",patrn);
    int result=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        int match=1;
    for(int j=0; patrn[j]!='\0'; j++)
    {
        if(str[i+j]!=patrn[j])
        {
            match=0;
            break;
        }
    }
        if(match==1)
        {
            result=1;
            break;
        }
    }
    if(result==1)
    {
        printf("\npattern match !!");
    }
    else
    {
        printf("\npatter not match !!");
    }
    return 0;
}