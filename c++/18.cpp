#include <iostream>
using namespace std;
int binaryToDeci(int num)
{
    int rem,decimal=0;
    int power=1;
    while(num>0)
    {
        
        num=num/10;
        rem=num%10;
        decimal=decimal+power*rem;
        power*=2;
    }
    cout<<decimal;
    return 0;
}
int main()
{
    binaryToDeci(110);
    return 0;
}