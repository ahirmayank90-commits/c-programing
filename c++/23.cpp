#include<iostream>
using namespace std;
int main()
{
    int marks[]={1,2,3,4,5}, p=1 , s=0 ;
    for(int i=0;i<5;i++)
    {
        cout<<marks[i]<<" ";
    }
    for(int i=0;i<5;i++)
    {
        p=p*(marks[i]);
        s=s+(marks[i]);

    }
    cout<<endl;
    cout<<"sum = "<<s<<endl;
    cout<<"product = "<<p<<endl;
    return 0;


}