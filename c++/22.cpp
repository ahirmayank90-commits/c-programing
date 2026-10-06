#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int marks[]={1,2,3,4,5};
    int smallest,largest;
    int a,b;
    smallest=INT_MAX;
    largest=INT_MIN;
    for(int i=0;i<5;i++)
    {
        smallest=min(marks[i],smallest);
    }
     for(int i=0;i<5;i++)
    {
        if(smallest==marks[i])
        {
            a=i;
        }
    }
    
    for(int i=0;i<5;i++)
    {
        largest=max(marks[i],largest);
    }
     for(int i=0;i<5;i++)
    {
        if(largest==marks[i])
        {
            b=i;
        }
    }
    swap(marks[a],marks[b]);
    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<<"  ";
    }
    return 0;

    
}