#include<stdio.h>
int main()
{
    int i=0,count=0,n=0;
    char ch[100];
    char str[]={'a','e','i','o','u'};
    printf("input : ");
    while((ch[i]=getchar())!='\n')
    {
        for(int a=0;a<5;a++)
        {
            if(ch[i]==str[a])
            {
                count++;
            }
            
        }
        if(ch[i]==' ')
            {
                n++;
            }
        i++;
    }
    ch[i]='\0';
    printf("output : %s",ch);
    printf("\nthe number of the words is %d",i);
    printf("\nnumber of the vowels : %d",count);
    printf("\nnumber of the spaces : %d",n);
    return 0;
}
