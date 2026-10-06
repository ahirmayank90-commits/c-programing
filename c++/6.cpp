#include <iostream>
using namespace std;
int main()
{
    char c;
    cout <<"enter the character :\n";
    cin >> c;
    if(int(c)<97){
        cout<<"give char is in capital alphabate\n";
    }else{
        cout<<"give char is in small alphabate\n";
    }
    return 0;

}