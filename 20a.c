#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    int rollno;
    printf("welcome to our portal\nyour result is declared\ncheck your result now\n");
    printf("enter your name:");
    scanf("\n%s",&name);
    printf("enter your roll number :");
    scanf("\n%d", &rollno);
        if (strcmp(name ,"mayank")==0)
            {
                if(rollno==1)
                {
                    printf("your marks is 98");
                }
            }
        else if (strcmp(name ,"gaurang")==0)
            {
                if(rollno==56)
                {
                    printf("your marks is 80");
                }
            }
        else if (strcmp(name ,"jaydeep")==0)
            {
                if(rollno==29)
                {
                    printf("your marks is 82");
                }
            }
        
        else if (strcmp(name ,"dhulo")==0)
            {
                if(rollno==49)
                {
                    printf("your marks is 72");
                }
            }
        else if (strcmp(name ,"aryan")==0)
            {
                if(rollno==9)
                {
                    printf("your marks is 85");
                }
            }
        else
            {
                printf("your result is not found!");

            }
}
