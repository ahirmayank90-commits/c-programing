#include <stdio.h>
struct address
{
    char city[30];
    int pin;
};
struct student
{
    int roll;
    struct address addr;

    float cgpa;
};

int main()
{
    struct student class[3] =
        {
            {101, {"Surat", 395010}, 8.4},
            {102, 8.9},
            {103, 6}};
    struct student *p;
    p = class;
    for (int i = 0; i < 3; i++)
    {
        printf("roll number : %d", p->roll);
        printf("    cgpa :%f\n", p->cgpa);
        p++;
    }
    printf("%d\n", sizeof(struct student));
    printf("%s\n", class[0].addr.city);

    return 0;
}