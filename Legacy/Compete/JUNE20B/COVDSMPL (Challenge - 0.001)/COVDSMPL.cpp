#include <iostream>
using namespace std;

int main() {
    int T, N, P, i, j, X;
    //int M[60][60];
    cin>>T;
    //cout<<"input t"<<endl;
    while(T--)
    {
        cin>>N;
        cin>>P;
        //cout<<"input n and p"<<endl;
        int M[N][N] = {};
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                cout<<1<<" "<<i + 1<<" "<<j + 1<<" "<<i + 1<<" "<<j + 1<<endl;
                cin>>M[i][j];
            }
        }
        cout<<2<<endl;
        //cout<<"printed 2"<<endl;
        for(i=0; i<N ; i++)
        {
            for(j=0; j<N; j++)
            {
                cout<<M[i][j]<<" ";
            }
            cout<<endl;
        }
        cin>>X;
        //cout<<"took x"<<endl;
        if(X == -1)
        {
            return 0;
        }
    }
	return 0;
}
