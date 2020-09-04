#include <iostream>
using namespace std;

int main() {
	int T, B, X;
	cin>>T;
	while(T--)
	{
	    cin>>B;
	    X = B / 2;
	    if(X == 1 || X == 0)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        cout<<(X * (X - 1)) / 2<<endl;
	    }
	}
	return 0;
}
