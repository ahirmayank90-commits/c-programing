#include <stdio.h>
struct data
{
    int marks;
    struct marks *next;
};

int main()
{
    struct data n1, n2, n3;
    struct data *ptr;
    n1.marks = 10;
    n2.marks = 20;
    n3.marks = 30;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;
    ptr = &n1;
    while (ptr != NULL)
    {
        printf("%d ", ptr->marks);
        ptr = ptr->next;
    }

    return 0;
}