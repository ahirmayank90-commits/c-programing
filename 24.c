#include <stdio.h>
int main()
{
    float C, F;
    int option;
    printf("well come to our program\nwe will convert degree celsius to franhite unit\nthere is two optioin\n1.conversion of c to f\n2.converion of f to c\nchoose your option : ");
    scanf("\n%d", &option);
    F = C * 1.8 + 32;
    if (option == 1)
    {

        printf("please enter the value of C : ");
        scanf("\n%f",&C);
        printf("F =%f",F);


    }
    else if (option == 2)
    {

        printf("please enter the value of F : ");
    }
    else
    {
        printf("choose the correct option");
    }
    scanf("%f",&F);
    return 0;
}