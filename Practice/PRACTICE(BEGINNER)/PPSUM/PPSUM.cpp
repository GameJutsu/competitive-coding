#include <iostream>
using namespace std;

int main() {
	int T, D, N, ans;
	cin>>T;
	while(T--)
	{
	    cin>>D>>N;
	    for(int i=0; i<D; i++)
	    {
	        ans = N * (N + 1) / 2;
	        N = ans;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
