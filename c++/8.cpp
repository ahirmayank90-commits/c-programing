#include<iostream>
using namespace std;
int main()
{
    int s=0,n;

    cout <<"enter the value of n : ";
    // some of the odd number less than n.
    cin >>n;
    for(int i=1;i<=n;i=i+2){
        s=s+i;
        }
    cout<<"sum  is "<<s;
    return 0;
}