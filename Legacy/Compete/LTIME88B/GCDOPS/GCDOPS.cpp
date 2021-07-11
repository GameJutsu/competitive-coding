#include <iostream>
using namespace std;

int main() {
	int T, n, curr;
	cin>>T;
	while(T--)
	{
        cin>>n;
        bool proc=true;
        for(int i=1;i<=n;i++)
        {
            cin>>curr;
            if(i%curr!=0)
            {
                proc=false;
            }
        }
        if(proc)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
	}
	return 0;
}