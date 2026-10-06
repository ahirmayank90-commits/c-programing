#include <stdio.h>
void printstar(int n)
{
    for ( int i = 0; i < n; i++)
    printf("%c",'*');
}

int main() {
    int n;
    
    {
       printstar(15); /* code */
    }
    
    
    return 0;
}