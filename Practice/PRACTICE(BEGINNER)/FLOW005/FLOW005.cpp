#include <iostream>
using namespace std;

int main() {
	int T, R, N, X;
	int D[] = {100, 50, 10, 5, 2, 1};
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    X = 0;
	    for(int i = 0; i < 6; i++)
	    {
	        if(N == 0)
	        {
	            break;
	        }
	        X += N / D[i];
	        N = N % D[i];
	    }
	    cout<<X<<endl;
	}
	return 0;
}
