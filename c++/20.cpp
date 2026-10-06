#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int size;
    cout<<"please enter the size of the arry :";
    cin>>size;
    int marks[size];
    int smallest= INT_MAX;

    for(int i=0;i<size;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<marks[i]<<endl;
    }
    for(int i=0;i<size;i++)
    {
        smallest=min(marks[i],smallest);

    }
    cout<<"min marks is "<<smallest<<endl;
    for(int i=0;i<size;i++)
    {
        if(smallest==marks[i])
        {
            cout<<"index = "<<i<<endl;
        }
    }
    return 0;
}