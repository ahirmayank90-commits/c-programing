#include <iostream>
using namespace std;
int main()
{
    char password;
    cout <<"please enter the password :\n";
    cin>>password;
    cout <<(password == 'm'?"next":"wrong password")<<endl;
    return 0;

}