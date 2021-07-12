#include <iostream>
using namespace std;

int main()
{
	double bal;
	int wd;
	cin>>wd;
	cin>>bal;
	cout.precision(2);
	if(wd % 5 == 0 && wd <= (bal - 0.5))
	{
	    cout<<fixed<<bal - (wd + 0.5);
	}
	else
	{
	    cout<<fixed<<bal;
	}
	return 0;
}
