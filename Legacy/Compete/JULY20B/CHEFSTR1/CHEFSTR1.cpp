#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long T, N, a, b, sum;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    sum = 0;
	    for(int i=0; i<N; i++)
	    {
	        if(i == 0)
	        {
	            cin>>a;
	        }
	        else
	        {
	            cin>>b;
    	        sum += abs(b - a) - 1; 
    	        a = b;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
