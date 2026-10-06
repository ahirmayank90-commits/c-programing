#include<iostream>
using namespace std;
// function to find sum of the digits of the number
int sumOfDig(int num)
{
    int sum=0;
    while(num>0)
    {
        int dig;
        dig=num%10;
        num=num/10;
        sum=dig+sum;
    }
        return sum;

}

int main()
{
    int num;
    cout<<"please enter the number :";
    cin>>num;
    cout<<sumOfDig(num)<<endl;
    return 0;
}
