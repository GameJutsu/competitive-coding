#include <iostream>
using namespace std;

int main() {
	int T, i, j, N, c, total;
	cin>>T;
	for(i=0; i<T; i++)
	{
	    string a;
	    cin>>a;
	    c = 0;
	    total = 0;
	    while(c < a.length() - 1)
	    {
	        if(a.at(c) != a.at(c + 1))
	        {
	            total++;
	            c += 2;
	        }
	        else
	        {
	            c++;
	        }
	    }
	    cout<<total<<endl;
	    //cout<<a<<endl;
	}
	return 0;
}
