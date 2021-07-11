#include<bits/stdc++.h>
using namespace std;

int answer(int N, int K, vector<int> &fam, int curr, vector<int> &impr)
{
    if(curr >= N)
    {
        return INT_MAX;
    }
    
    if(impr[curr]!=-1)
    {
        return impr[curr];
    }
    
    vector<int> fam_mapping(101);
    int f_ineff = INT_MAX, curr_ineff = 0, l_ineff = INT_MAX, ret_ineff = INT_MAX;
    
    for(int i=curr; i<N; i++)
    {
        fam_mapping[fam[i]]++;
        if(fam_mapping[fam[i]]>=2)
        {
            if(fam_mapping[fam[i]]==2)
            {
                curr_ineff += 2;
            }
            else
            {
                curr_ineff++;
            }
        }
    
        ret_ineff = answer(N, K, fam, i+1, impr);
        if(ret_ineff!=INT_MAX)
        {
            ret_ineff+= curr_ineff + K;
        }
        if(ret_ineff<l_ineff)
        {
            l_ineff = ret_ineff;
        }
    }
    
    f_ineff = curr_ineff + K;
    impr[curr] = min(l_ineff, f_ineff);
    return impr[curr];
}


int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N, K;
        cin>>N>>K;
        vector<int> fam(N);
        vector<int> impr(N, -1);
        for(int i=0; i<N; i++)
        {
            cin>>fam[i];
        }
        cout<<answer(N, K, fam, 0, impr)<<endl;
	}
	return 0;
}
