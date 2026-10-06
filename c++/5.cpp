# include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"please enter your age :"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"eligible for voting"<<endl;
    }
    else
    {
        cout<<"not eligible for voting"<<endl;
    }
    return 0;

}