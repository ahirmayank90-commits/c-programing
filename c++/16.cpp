#include<iostream>
using namespace std;
int fact(int number)
{
    int fact=1,r=1;
    while(r<=number)
    {
        fact=fact*r;
        r++;

    }
    return fact;
}
int main()
{
    int n,r;
    int ncr;
    cout<<"please enter the value of the n and r :";
    cin>>n>>r;
    if(r>n)
    {
        cout<<"please enter the valid value!"<<endl;
    }
    else
    {
    ncr=fact(n)/(fact(r)*fact(n-r));
    cout<<"ncr = "<<ncr<<endl;
    }
    return 0;

}