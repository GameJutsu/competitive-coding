#include <iostream>
using namespace std;

int main() {
	int N;
	cin>>N;
	if(N%4 == 0)
	{
	    cout<<++N;
	}
	else
	{
	    cout<<--N;
	}
	return 0;
}
