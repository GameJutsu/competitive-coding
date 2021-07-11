#include <iostream>
using namespace std;

int main() {
	int testCases, i, j, five, ten, fifteen, N, curr, poss;
	cin>>testCases;
	for(i=0; i<testCases; i++)
	{
	    cin>>N;
	    poss = 1;
	    five = 0;
	    ten= 0;
	    fifteen = 0;
	    for(j=0; j<N; j++)
	    {
	        if(poss == 1)
	        {
    	        cin>>curr;
	            if(curr == 5)
    	        {
    	            five++;
    	        }
    	        else if(curr == 10)
    	        {
    	            if(five > 0)
    	            {
    	                five--;
    	                ten++;
    	            }
    	            else
    	            {
    	                poss = 0;
    	            }
    	        }
    	        else
    	        {
    	            if(ten > 0)
    	            {
    	                ten--;
    	            }
    	            else if(five > 1)
    	            {
    	                five -= 2;
    	            }
    	            else
    	            {
    	                poss = 0;
    	            }
    	        }
	        }
	        else
	        {
	            cin>>curr;
	        }
	    }
	    if(poss == 0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
