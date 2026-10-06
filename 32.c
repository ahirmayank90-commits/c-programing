#include <stdio.h>

void main() {
int  a, b, r;
printf("enter the value of a and b ");
scanf ("%d %d", &a, &b);
if 
 (a > b)  { 
r = a;  a = b;  b = a; 
}
while ((b % a) != 0)  {
r = b % a;
b = a;
a = r;
}

printf ("the GOD is %d", a);

}