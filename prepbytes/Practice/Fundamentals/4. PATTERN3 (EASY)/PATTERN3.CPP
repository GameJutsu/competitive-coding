#include <bits/stdc++.h>
using namespace std;

int main()
{
    //write your code here
    char c;
    cin >> c;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i; j < 5; j++)
        {
            cout << " ";
        }
        for (int j = i; j < 5; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}