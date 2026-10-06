#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>marks={1,2,3,4,5};
    for(int i : marks)
    {
        cout<<i<<endl;
    }
    cout<<"last entry is "<<marks.back()<<endl;
    cout<<"size of the arry is "<< marks.size()<<endl;
    cout<<"first entry is "<<marks.front()<<endl;
    cout<<"2nd entry is "<<marks.at(1)<<endl;
    cout<<"3rd entry is "<<marks.at(2)<<endl;
    return 0;
}