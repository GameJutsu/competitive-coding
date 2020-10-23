#include <iostream>
using namespace std;

int main() {
	long long int T, n, k, curr, ans, i, flag;
	cin>>T;
	while(T--)
	{
	    ans=-1, curr=0;
        cin>>n>>k;
        long long int q[100000];
        for(int i=0;i<n;i++)
        {
            cin>>q[i];
        }
        
        if(n==1)
        {
            cout<<(q[0] / k) + 1 << endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(q[i]>k)
                {
                    q[i+1] += q[i] - k;
                    curr = q[i] - k;
                }
                if(q[i] < k)
                {
                    ans = i+1;
                    break;
                }
            }
            if(ans == -1)
            {
                cout<<n + (curr/k) + 1 << endl;
            }
            else
            {
            cout<<ans<<endl;
            }
        }
	}
	return 0;
}
