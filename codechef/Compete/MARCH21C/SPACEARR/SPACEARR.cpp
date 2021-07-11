#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,curr=0,i,flag=0,a;
        vector<int> v;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        for(i=0; i<n; i++)
        {
            if(v[i] > i+1)
            {
                cout<<"Second"<<endl;
                flag = 1;
                break;
            }
            else
            {
                curr += i+1 - v[i];
            }
        }
        if(flag == 0)
        {
            if(curr & 1)
            {
                cout<<"First"<<endl;
            }
            else
            {
                cout<<"Second"<<endl;
            }
        }
	}
	return 0;
}
