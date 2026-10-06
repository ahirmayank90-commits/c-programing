#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char> vec(5,'a');
    for(char i: vec)
    {
        cout<<i<<endl;
    }
    return 0;
}