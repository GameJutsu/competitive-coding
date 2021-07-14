#include <bits/stdc++.h>
using namespace std;

int main()
{
    //write your code here
    int x, y = 0;
    cin >> x;

    while (x != 0)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }
    cout << y;
    return 0;
}