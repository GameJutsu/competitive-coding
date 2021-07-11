#include <iostream>
using namespace std;

int main() {
	int T, i;
	long long int Dist, M, N;
	cin>>T;
	for(i=0; i<T; i++)
	{
	    cin>>M;
	    cin>>N;
	    Dist =  (N < 9 ? 0 :   
        (N < 99 ? M :   
        (N < 999 ? 2*M :   
        (N < 9999 ? 3*M :   
        (N < 99999 ? 4*M :   
        (N < 999999 ? 5*M :   
        (N < 9999999 ? 6*M :  
        (N < 99999999 ? 7*M :  
        (N < 999999999 ? 8*M : 9*M)))))))));
	    cout<<Dist<<" "<<M;
	    cout<<"\n";
	}
	return 0;
}
