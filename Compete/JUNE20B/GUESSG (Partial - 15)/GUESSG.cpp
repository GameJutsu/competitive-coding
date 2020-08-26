#include <iostream>
using namespace std;

int check(int v)
{
    int found = 0;
    int chance = 1;
    string o, e, ans;
    cout<<v<<endl;
    cin>>o;
    //cout<<"Checking first time "<<o<<endl;
    cout<<v<<endl;
    cin>>e;
    //cout<<"Checking second time "<<e<<endl;
    while(found != 1)
    {
        cout<<v<<endl;
        cin>>ans;
        //cout<<"Checking next time "<<ans<<endl;
        if(chance % 2 == 1 && ans != o)
        {
            found = 1;
            //cout<<"Odd is false"<<endl;
            //return found;
        }
        else if(chance % 2 == 0 && ans != e)
        {
            found = 1;
            //cout<<"Even is false"<<endl;
            //return found;
        }
        chance++;
    }
    return found;
}

int main() {
	int N, y, min, max, truthy, value, mainChance;
	string ans;
	cin>>N;
	//cout<<"N is "<<N<<endl;
	min = 1;
	max = N;
	value = (min + max) / 2;
	truthy = check(value);
	//cout<<"Truthy is "<<truthy<<endl;
	mainChance = 0;
	while(ans != "E")
	{
	    if(mainChance % 2 == 0)
	    {
            y = (min + max) / 2;
    	    //cout<<"Even chance y was "<<y<<endl;
    	    cout<<y<<endl;
    	    cin>>ans;
    	    //cout<<"Ans was "<<ans<<endl;
    	    if(ans == "G")
    	    {
    	        min = y;
    	    }
    	    else if(ans == "L")
    	    {
    	        max = y;
    	    }
    	    //cout<<"Now min max are "<<min<<" "<<max<<endl;
	    }
	    else if(mainChance % 2 != 0)
	    {
	        //cout<<"Odd chance y was somethhing"<<endl;
	        cout<<y<<endl;
	        cin>>ans;
	        //cout<<"Ans was "<<ans<<endl;
	    }
	    mainChance++;
	}
	return 0;
}
