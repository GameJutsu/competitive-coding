#include <iostream>
using namespace std;

int main() {
	unsigned long long T, g, prev, curr;
	string N;
	cin>>T;
	while(T--)
	{
	    g = 0;
	    cin>>N;
	    N = "0" + N;
	    for(long long int i = 0; i < N.length(); i++)
	    {
	        if(N[i] == '0' && N[i+1] == '1')
	        {
	            g++;
	        }
	    }
	    cout<<g<<endl;
	}
	return 0;
}
