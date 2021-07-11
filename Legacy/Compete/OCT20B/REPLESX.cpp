#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	long long int n, x, p, k;
	cin>>T;
	while(T--)
	{
	    cin>>n>>x>>p>>k;
	    long long int sX=0, gX=0;
	    vector<long long int> arr(n);
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<x)
	        {
	            sX++;
	        }
	        if(arr[i]>x)
	        {
	            gX++;
	        }
	    }
	    long long int ans=0;
	    if(sX>(p-1))
	    {
	        if(k<=sX && (sX-k+1)>=(sX-(p-1)))
	        {
	            ans=sX-(p-1);
	        }
	        else
	        {
	            ans=-1;
	        }
	    }
	    else if(gX>(n-p))
	    {
	        if(k>(n-gX) && (k-(n-gX))>=(gX-(n-p)))
	        {
	            ans=(gX-(n-p));    
	        }
	        else
	        {
	            ans=-1;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
