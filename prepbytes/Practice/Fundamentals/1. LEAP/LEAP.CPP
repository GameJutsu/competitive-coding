#include <bits/stdc++.h>
using namespace std;

bool isLeap(int n)
{
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    //write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (isLeap(n))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}