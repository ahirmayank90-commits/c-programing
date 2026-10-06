#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>marks;
    marks.push_back(0);
    marks.push_back(1);
    marks.push_back(2);
    cout<<marks.size()<<endl;
    cout<<marks.capacity()<<endl;
    return 0;
}