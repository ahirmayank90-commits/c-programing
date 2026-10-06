#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++){
        for(int n=1;n<=(3-i);n++){
            cout<<" ";
        }
        for(int r=1;r<=(i+1);r++){
            cout<<r;
        }
        for(int m=i;m>0;m--){
            cout<<m;
        }
        for(int a=0;a<(4-i);a++){
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}