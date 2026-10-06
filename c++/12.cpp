#include<iostream>
using namespace std;
int main()
{
    char c = 'A';
    for(int i=1;i<=4;i++){
        for(int n=0;n<=25;n++){
            
            cout<< char(n+int(c))<<"   ";
        }
        cout<<"\n";
    }
    return 0;
}