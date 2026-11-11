#include <stdio.h>
struct student {
    int roll;
};
int main() {
    struct student s[100];
    struct student *p=s;
    p->roll=1;
    (p+1)->roll=2;
    
    printf("roll number of 1st student  : %d\n",p->roll);
    printf("roll number of 2nd student  : %d\n",(p+1)->roll);
    
    return 0;
}