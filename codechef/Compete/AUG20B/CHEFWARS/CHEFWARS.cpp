#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int H, P, win = 0;
	    cin>>H>>P;
	    while(P!=0)
	    {
	        H -= P;
	        P /= 2;
	        if(H<=0)
	        {
	            win = 1;
	            break;
	        }
	    }
	    cout<<win<<endl;
	}
	return 0;
}
