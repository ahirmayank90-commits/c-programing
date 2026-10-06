#include<iostream>
using namespace std;
int main()
{
    int num;
    int rem,power=1,binary=0;
    cout<<"enter the number : ";
    cin>>num;
    while(num>0)
    {
        
        rem=num%2;
        num=num/2;
        binary=binary+power*rem;
        power*=10;
    }
    cout<<binary;
    return 0;

}