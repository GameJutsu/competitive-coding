#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string s, p;
	    cin>>s>>p;
	    for(int i=0; i<p.length(); i++)
	    {
	        s.erase(s.begin() + s.find(p[i]));
	    }
	   // cout<<s<<endl;
	    sort(s.begin(), s.end());
	   // cout<<s<<endl;
	    string v = s;
	    v.push_back(p[0]);
	   // cout<<v<<endl;
	    sort(v.begin(), v.end(), greater<char>()); 
	   // cout<<v<<endl;
	    if(s.find(p[0]) == -1)
	    {
	        cout<<s.substr(0, v.length()-v.find(p[0])-1)+p+s.substr(v.length()-v.find(p[0])-1)<<endl;
	    }
	    else
	    {
	        string weird = s.substr(0, s.find(p[0])) + p + s.substr(s.find(p[0]));
	        cout<<min(weird, s.substr(0, v.length()-v.find(p[0])-1) + p + s.substr(v.length()-v.find(p[0])-1))<<endl;
	    }
	}
	return 0;
}
