#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int pc, pr, nc, nr;
	    cin>>pc>>pr;
	    nc = ((pc-1)/9) + 1;
	    nr = ((pr-1)/9) + 1;
	    if(nr<nc || nr==nc)
	    {
	        cout<<1<<" "<<nr<<endl;
	    }
	    else if(nc<nr)
	    {
	        cout<<0<<" "<<nc<<endl;
	    }
	}
	return 0;
}
