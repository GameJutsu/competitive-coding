#include <iostream>
using namespace std;

int main() {
	int T, i, j, k, N, row, col;
	cin>>T;
	for(i=0; i<T; i++)
	{
	    cin>>N;
	    row = 1;
	    col = 1;
	    for(j=1; j<=N*N; j++)
	    {
            //cout<<N * (row - 1) + col;
            if(row % 2 != 0)
            {
                cout<<N * (row - 1) + col;
            }
            else
            {
                cout<<N * (row - 1) + (N - col + 1);
            }
            if(j % N == 0)
            {
                cout<<endl;
                row++;
                col = 1;
            }
            else
            {
                cout<<" ";
                col++;
            }
	    }
	}
	return 0;
}
