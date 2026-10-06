#include<iostream>
using namespace std;
int main()
{
    int num,rem,newNum=0,power;
    cout<<"enter the num : ";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        power=10*newNum;
        newNum=rem+power;

    }
    cout<<newNum<<endl;
    return 0;
}