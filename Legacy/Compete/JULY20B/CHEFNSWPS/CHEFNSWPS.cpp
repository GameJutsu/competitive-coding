#include <iostream>
#include <vector>
#include <unordered_map> 
#include <algorithm>

using namespace std;

int main()
{
    int T; 
    cin>>T;
    while(T--)
    {
        //cout<<"T"<<T+1<<endl;
        long long N, A, possible, ans, low; 
        cin>>N;
        vector<long long> a, b, v1, v2;
        unordered_map<long long,long long> orig;
        low = 1000000000;
        
        for(long long i=0; i<N; i++)
        {
            cin>>A;
            a.push_back(A);
            //a[i] = A;
            orig[a[i]]++;
            low = min(low, a[i]);
        }
        
        for(long long i=0; i<N; i++)
        {
            cin>>A;
            b.push_back(A);
            //b[i] = A;
            orig[b[i]]++;
            low = min(low, b[i]);
        }
        
        possible = 1;
        
        unordered_map<long long,long long> single;
        for(auto it=orig.begin(); it!=orig.end(); it++)
        {
            if(it->second % 2 == 1)
            {
                possible = 0;
                break;
            }
            else
            {
                single[it->first] = it->second/2;
            }
        }
        
        if(!possible)
        {
            cout << -1 << endl;
            continue;
        }
        
        unordered_map<long long,long long> tempMap = single;
        for(long long i=0; i<N; i++)
        {
            if(tempMap[a[i]])
            {
                tempMap[a[i]]--;
            }
            else
            {
                v1.push_back(a[i]);
                //v1[i] = a[i];
            }
        }
        
        tempMap = single;
        for(long long i=0; i<N; i++)
        {
            if(tempMap[b[i]])
            {
                tempMap[b[i]]--;
            }
            else
            {
                v2.push_back(b[i]);
                //v2[i] = b[i];
            }
        }
        
        if(v1.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        
        if(v1.size() != v2.size())
        {
            cout << -1 << endl;
            continue;
        }
        
        ans = 0;
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<>());
        
        for(long long i=0; i<v1.size(); i++)
        {
            ans = ans + min(2*low, min(v1[i], v2[i]));
        }
        
        cout<<ans<<endl;
    }
    return 0;
}