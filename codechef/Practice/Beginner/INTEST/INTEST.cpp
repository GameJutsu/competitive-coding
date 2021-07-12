#include <iostream>
using namespace std;

int main()
{
	int n, k, curr, total = 0, i;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	{
	    cin>>curr;
	    if(curr%k==0)
	    {
	        total++;
	    }
	}
	cout<<total;
	return 0;
}
