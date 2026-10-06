#include <stdio.h>

int main(){

    printf("Mayank Ahir\n");
    int marks;
    printf("enter the marks : ");
    scanf("%d",&marks);
    if(marks>35)
    {
        switch (marks)
        {
            case 100 : printf("you are pass with excellent marks !!");
                       break;
            default  : printf("you are pass");
        }
    }
    else
    {
        printf("you are fail try next time");
    }

    return 0;
}