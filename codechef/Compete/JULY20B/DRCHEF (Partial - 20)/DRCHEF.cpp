#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N, X, ans = 0;
	    cin>>N>>X;
	    int all[N];
        for(int i=0; i<N; i++)
        {
            cin>>all[i];
        }
        
        sort(all, all+N);
	    
	    for(int i=0; i<N; i++)
	    {
            if(X >= all[i])
            {
                ans++;
                X = max(X, 2 * all[i]);
                continue;
            }
    	    int curr = all[i];
            while(curr>0)
            {
                ans++;
                curr = min(curr, 2 * (curr-X));
                X = 2 * X; 
            }
            X = 2 * all[i];
	    }
        cout<<ans<<endl;
	}
	return 0;
}
