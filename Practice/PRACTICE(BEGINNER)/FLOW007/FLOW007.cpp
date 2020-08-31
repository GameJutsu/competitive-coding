#include <iostream>
using namespace std;

int main() {
	int T, N, F, X;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    F = 0;
	    X = 0;
	    while(N!=0)
	    {
	        F = N % 10;
    	    X = X*10 + F;
    	    N /= 10;
	    }
	    cout<<X<<endl;
	    
	}
	return 0;
}
