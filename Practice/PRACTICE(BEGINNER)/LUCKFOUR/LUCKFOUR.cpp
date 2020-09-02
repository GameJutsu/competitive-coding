#include <iostream>
using namespace std;

int main() {
	int T, N, F;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    F = 0;
	    while(N!=0)
	    {
	        if(N%10 == 4)
	        {
	            F++;
	        }
	        N = N/10;
	    }
	    cout<<F<<endl;
	}
	return 0;
}
