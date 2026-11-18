#include <stdio.h>

int main() {
    char c;
    printf("enter the character : ");
    scanf("%c",&c);
    printf("%d",(int)c-(int)'A'+1);
    return 0;
}