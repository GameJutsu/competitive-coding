#include <iostream>
using namespace std;

int abs(int x)
{
    return x >= 0 ? x : -x;
}

int main() {
    long long int T, i, j, S, N, K, R, sum, gpsum, Diff, Extra = 0;
    cin>>T;
    for(i=0; i<T; i++)
    {
        cin>>S>>N>>K>>R;
        gpsum = 1;
        for(j=0; j<N; j++)
        {
            gpsum *= R;
        }
        sum = (R == 1 ? N * K : (K * ((1 - gpsum) / (1 - R))));
        Diff = S - sum;
	    Extra += Diff;
	    cout<<(Diff>=0 ? "POSSIBLE " : "IMPOSSIBLE ");
	    cout<<abs(Diff);
	    cout<<"\n\n";
	}
	cout<<(Extra >= 0 ? "POSSIBLE" : "IMPOSSIBLE");
	return 0;
}
