#include <iostream>
using namespace std;

int main() {
	int T, K;
	cin>>T;
	while(T--)
	{
	    int f = 0, done = 0;
	    cin>>K;
	    for(int i=0; i<8; i++)
	    {
	        for(int j=0; j<8; j++)
	        {
	            if(f==0)
	            {
	                cout<<"O";
	                f++;
	                done++;
	            }
	            else if(done<K)
	            {
	                cout<<".";
	                done++;
	            }
	            else
	            {
	                cout<<"X";
	            }
	        }
	        cout<<endl;
	    }
	    cout<<endl;
	}
	return 0;
}
