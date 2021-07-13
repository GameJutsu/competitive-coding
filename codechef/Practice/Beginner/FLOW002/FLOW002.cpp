#include <bits/stdc++.h> 

using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	cin>>T;
	while (T--) 
	{
		int a, b;
		cin>>a>>b;
		int ans = a % b;
		cout<<ans<<endl;
	}

	return 0;
}