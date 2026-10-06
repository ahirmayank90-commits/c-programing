#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int ans=0;
    vector<int>marks={1,1,2,2,3,3,3,3,5,56,5};
    for(int val:marks)
    {
        ans=ans^val;
    }
    cout<<"uniq number is "<<ans<<endl;
    return 0;
}