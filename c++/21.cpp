#include <iostream>
using namespace std;
int main()
{
    int marks[]={1,2,3};
    for(int i=0;i<2;i++)
    {
        swap(marks[i],marks[2-i]);
    }
    for(int i=0;i<3;i++)
    {
        cout<<marks[i]<<endl;
    }
    return 0;
}