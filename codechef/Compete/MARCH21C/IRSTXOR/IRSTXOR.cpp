#include <iostream>
using namespace std;

long long prim(long long s,long long m)
{
  long long curr=0;
  while(m>0)
  {
    if(m&1)
    {
      curr+=s;
    }
    m >>= 1;
    s <<= 1;
  }
  return curr;
}

int secon(int num)
{
  int xor_val=0;
  if(num&&!(num&(num-1)))
  {
    return num;
  }
  while(num>0)
  {
    num>>=1;
    xor_val++;
  }
  return (1 <<xor_val);
}

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    long long c;
        cin>>c;
        long long secon_val=secon(c);
        if(c==secon_val)
        {
          secon_val=secon(c+1);
        }
        long long x=secon_val/2;
        x--;
        long long y=c^x;
        cout<<prim(x,y)<<"\n";
	}
	return 0;
}
