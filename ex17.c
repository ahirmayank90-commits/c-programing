#include<stdio.h>
int main()
{
    int n;
    char h;
    printf("hello wellcome to our hotel\n");
    printf("choice 1 : show menu\n");
    printf("choice 2: order food\n");
    printf("choice 3 : exit\n");
    while(1)
    {
        home:
        printf("enter your choice : ");
        scanf("%d", &n);
        switch (n)
        {
            case 1: {printf("1.vadapav\n2.chaat\n3.panipuri\4.bhajiya\n5.phaphada\n\nenter H for go to home page");
                    scanf("%c", &h);
                    if(h=='H');
                    {
                        goto home;
                    }
                    break;}
            case 2:printf("please wait waiter is coming\n");
                    break;
            case 3:{break;}        
        }
    }
    return 0;
    

}