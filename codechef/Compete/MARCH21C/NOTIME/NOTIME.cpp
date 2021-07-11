#include <iostream>
using namespace std;

int main() {
	int N, H, x, curr;
	cin>>N>>H>>x;
	for(int i=0; i<N; i++)
	{
	    cin>>curr;
	    if((curr + x) >= H)
	    {
	        cout<<"YES";
	        return 0;
	    }
	}
	cout<<"NO";
	return 0;
}
