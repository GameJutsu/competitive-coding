#include <iostream>
using namespace std;

int main() {
	int T, N, X, Y;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    X = N%10;
	    while(N != 0)
	    {
	        Y = N%10;
	        N /= 10;
	    }
	    cout<<X+Y<<endl;
	}
	return 0;
}
