#include<stdio.h>
int main()
{
    char p;
    p='r';
    switch (p)
    {
    case 'r':
    {
        printf("file has read permition");
        break;
    }
    case 'w':
    {
        printf("file has write permition");
        break;
    }
    case 'e':
    {
        printf("file has excute permition");
        break;
    }
}
    return 0;
}