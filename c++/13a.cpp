#include<iostream>
using namespace std;
int main()
{
    
    for(int i=0;i<=9;i++)
    {
        for(int n=0;n<=3;n++){
        if(i==3*n)
        {
            cout<<"\n";
        }
    }
    cout<< i <<"   ";
    }
    return 0;
}