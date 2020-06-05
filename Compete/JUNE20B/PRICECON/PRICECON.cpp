#include <iostream>
using namespace std;

int main() {
	int T, i, j, N, K, max, sum;
	cin>>T;
	for(i=0; i<T; i++)
	{
	    cin>>N;
	    cin>>K;
	    max = 0;
	    sum = 0;
	    int P[N] = {};
	    for(j=0; j<N; j++)
	    {
	        cin>>P[j];
	        max += P[j];
	        if(P[j]<K)
	        {
	            sum += P[j];
	        }
	        else
	        {
	            sum += K;
	        }
	    }
	    cout<<max - sum<<endl;
	    
	}
	return 0;
}
