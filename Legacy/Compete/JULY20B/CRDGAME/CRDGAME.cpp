#include <iostream>
using namespace std;

int sumOfDigits(int x) 
{ 
    int sum = 0; 
    while (x != 0) 
    { 
        sum += x %10; 
        x   = x /10; 
    } 
    return sum; 
} 

int main() {
	int T, N, a, b, pa, pb;
	cin>>T;
	while(T--)
	{
	    pa = 0;
	    pb = 0;
	    cin>>N;
	    while(N--)
	    {
	        cin>>a>>b;
	        if(sumOfDigits(a)>sumOfDigits(b))
	        {
	            pa++;
	        }
	        else if(sumOfDigits(b)>sumOfDigits(a))
	        {
	            pb++;
	        }
	        else
	        {
	            pa++;
	            pb++;
	        }
	    }
	    if(pa>pb)
	    {
	        cout<<0<<" "<<pa<<endl;
	    }
	    else if(pb>pa)
	    {
	        cout<<1<<" "<<pb<<endl;
	    }
	    else
	    {
	        cout<<2<<" "<<pa<<endl;
	    }
	}
	return 0;
}
