#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long n, e, h, a, b, c;
	    cin>>n>>e>>h>>a>>b>>c;
	    vector<long long>ans;
	    vector<long long>con;
	    for(int i=0; i<=n+1; i++)
	    {
	        con.push_back(i);
	    }
	    for(long long j=0; j<=n; j++)
	    {
	        long long alph = lower_bound(con.begin(), con.end(), (2*n-e-2*j)) - con.begin();
	        long long bet = upper_bound(con.begin(), con.end(), (h-3*j)) - con.begin() - 1;
	        if(bet<alph || alph==n+1)
	        {
	            continue;
	        }
	        if(bet==n+1 && bet+3*j>h)
	        {
	            continue;
	        }
	        long long c2;
	        if(c>a)
	        {
	            c2=(alph<(n-j)?alph:(n-j));
	        }
	        else
	        {
	            c2=(bet<(n-j)?bet:(n-j));
	        }
	        long long a2=n-c2-j;
	        if(c2+2*j >= 2*n-e && c2+3*j <= h)
	        {
	            ans.push_back(a*a2 + b*j + c*c2);
	        }
	    }
	    if(ans.size()==0)
	    cout<<"-1"<<endl;
	    else
	    {
	        long long cost=ans[0];
	        for(long long i=0; i<ans.size(); i++)
	        {
	            if(ans[i]<cost)
	            {
	                cost=ans[i];
	            }
	        }
	        cout<<cost<<endl;
	    }
	}
	return 0;
}
