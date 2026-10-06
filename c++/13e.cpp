#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int r = 0; r < (4 - i); r++)
        {
            cout << (i + 1);
        }
        cout << "\n";
    }
    return 0;
}