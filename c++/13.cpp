#include<iostream>
using namespace std;
int main()
{
    char c='A';
    for(int i=0;i<=25;i++)
    {
        for(int n=0;n<=6;n++){
        if(i==6*n)
        {
            cout<<"\n";
        }
    }
    cout<<char(i+int(c))<<"   ";
    }
    return 0;
}