#include <iostream>
using namespace std;

int main() {
	int T, N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    if(N!=2010 && N!= 2015 && N!= 2016 && N!= 2017 && N!= 2019)
	    {
	        cout<<"NOT HOSTED"<<endl;
	    }
	    else
	    {
	        cout<<"HOSTED"<<endl;
	    }
	}
	return 0;
}
