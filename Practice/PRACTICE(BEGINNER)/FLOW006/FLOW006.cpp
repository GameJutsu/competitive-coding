#include <iostream>
using namespace std;

int main() {
	int T, i, j, N, sum;
	cin>>T;
	for(i=0; i<T; i++)
	{
	    cin>>N;
	    sum = 0;
	    while (N > 0)
	    {
	        sum += N % 10;
	        N = N / 10;
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
