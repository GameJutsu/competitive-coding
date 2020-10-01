#include <iostream>
using namespace std;

int main() {
	int T, n, curr;
	cin>>T;
	while(T--)
	{
        cin>>n;
        long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>curr;
            sum += curr;
        }
        if(sum < 0)
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
