#include <stdio.h>
void strcpy1(char *s1, const char *s2)
{
    while(*s2!='\0')
    {
        *s1=*s2;
        ++s1,++s2;
    }
    *s1='\0';
}
int main()
{
    char s1[] = "mayank";
    char *a=s1;
    
    
    char s2[100];
    char *b=s2;
    
    strcpy1(b,a);
    printf("%s",s2);
    return 0;
}