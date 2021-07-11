#include <iostream>
#include <math.h>
using namespace std;

int main() {
	unsigned long long int T, TS, total, twoFact, count, N;
	cin>>T;
	while(T--)
	{
	    cin>>TS;
	    total = 0;
	    if(TS % 2 != 0)
	    {
	        total = TS / 2;
	    }
	    else
	    {
    	    twoFact = 0;
    	    N = TS;
            while(N % 2 == 0)
            {
                N /= 2;
                twoFact++;
            }
    	    total = TS / (2 * int(pow(2, twoFact) + 0.5));    
	    }
	    cout<<total<<endl;
	}
	return 0;
}
