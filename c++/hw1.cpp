#include <iostream>
using namespace std;
int prime(int num)
{
    int x=1;
    for (int i = 2; i < num; i++)
    {
        if ((num % i) == 0)
        {
            x = 0;
        }
    }
    if (x==1)
    {
        cout << num<<" ";
    }
    return 0;
}
int main()
{
 int n;
    cout << "please enter the value of the N :";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        prime(i);
    }
    return 0;

}