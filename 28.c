#include <stdio.h>

int main() {
    int i;
    i=10;
    while (i>0)
    {
        printf("given value is possitive");
        i=i+2;
    
    
    while (i<20)
    {
        printf("give value is less than 20");
        goto here;
    }
    
}
    here:
    
    return 0;
}