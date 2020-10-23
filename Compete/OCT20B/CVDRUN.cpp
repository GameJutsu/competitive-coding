#include <iostream>
using namespace std;

int main() {
	int T, n, k, x, y, start, flag;
	cin>>T;
	while(T--)
	{
	    cin>>n>>k>>x>>y;
	    flag = 0;
	    start = x;
        do
        {
            if(x == y)
            {
                flag = 1;
                break;
            }
            x = (x + k) % n;
            
        }while(x!=start);
        
        if(flag == 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
	}
	return 0;
}
