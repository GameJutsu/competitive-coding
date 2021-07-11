#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N, K, ans = -1, movs, input;
	    vector<int> ppos;
	    vector<int> pmovs;
	    cin>>N>>K;
	    for(int i=0; i<N; i++)
	    {
	        cin>>input;
	        ppos.push_back(input);
	    }
	    
	    for(int i=0; i<N; i++)
	    {
	        if(K%ppos[i] == 0)
	        {
	            if(ans == -1)
	            {
	                ans = ppos[i];
	                movs = K/ppos[i];
	            }
	            else
	            {
	                if(K/ppos[i]<movs)
	                {
	                    movs = K/ppos[i];
	                    ans = ppos[i];
	                }
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
