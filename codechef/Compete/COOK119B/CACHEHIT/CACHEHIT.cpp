#include <iostream>
using namespace std;

int main() {
	int T, N, B, M, x, currB, blockChange;
	cin>>T;
	while(T--)
	{
	    cin>>N>>B>>M;
	    cin>>x;
	    currB = x / B;
	    blockChange = 1;
	    M--;
	    while(M--)
	    {
	        cin>>x;
	        if(x / B != currB)
	        {
	            currB = x / B;
	            blockChange++;
	        }
	    }
	    cout<<blockChange<<endl;
	}
	return 0;
}
