#include <iostream>
using namespace std;

int magic(int S, int N)
{
    int total = 0;
    if(S<=N)
    {
        if(S==1)
        {
            return 1;
        }
        else if(S%2==0)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else
    {
        if(S%N==0)
        {
            return S/N;
        }
        else
        {
            total += S/N;
            total += magic(S%N, N);
            return total;
        }
    }
}

int main() {
	int T, N, S;
	cin>>T;
	while(T--)
	{
	    cin>>S>>N;
	    cout<<magic(S, N)<<endl;
	}
	return 0;
}
