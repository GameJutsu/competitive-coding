#include <iostream>
using namespace std;

int main() {
	int T, i, N, K, remK, q, rem;
	cin>>T;
	for(i=0; i<T; i++)
	{
	    cin>>N;
	    cin>>K;
	    if(K<=N)
	    {
	        cout<<K<<"\n";
	    }
	    else
	    {
	        remK = K - N;
	        q = remK / (N - 1);
	        rem = remK % (N - 1);
	        if(q % 2 != 0)
	        {
	            cout<<1 + rem<<"\n";
	        }
	        else
	        {
	            cout<<N - rem<<"\n";
	        }
	    }
	}
	return 0;
}
