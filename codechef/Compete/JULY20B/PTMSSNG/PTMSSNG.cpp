#include<iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N = 0, x = 0, y = 0, xA = 0, yA = 0;
    	cin >> N;
    	for (int i = 0; i < (4*N-1); i++) 
    	{
    		cin >> x >> y;
    		xA ^= x;
    		yA ^= y;
	    }
    	cout << xA << " " << yA << endl;
	}
	return 0;
}