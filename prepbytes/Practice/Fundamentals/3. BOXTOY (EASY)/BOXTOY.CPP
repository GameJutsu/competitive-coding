#include <bits/stdc++.h>
using namespace std;

int main()
{
    //write your code here
    int n, t, c, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> c;
        if (c - t >= 2)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}