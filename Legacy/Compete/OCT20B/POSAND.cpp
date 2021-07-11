#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo (int x)
{
    return x && (!(x&(x-1)));
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long n;
	    cin>>n;
	    
	    if(n==1)
	    {
	        cout<<"1"<<endl;
	        continue;
	    }
	    
	    if(isPowerOfTwo(n))
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    
	    if(n==3)
	    {
	        cout<<"2 3 1"<<endl;
	        continue;
	    }
	    
	    long long i;
	    cout<<"2 3 1 ";
	    for(i=4 ; i<=n ; i++)
	    {
	        if(isPowerOfTwo(i))
	        {
	            cout<<i+1<<" ";
	            continue;
	        }
	        
	        if(isPowerOfTwo(i-1))
	        {
	            cout<<i-1<<" ";
	            continue;
	        }
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
