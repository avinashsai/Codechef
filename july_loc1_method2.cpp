#include<iostream>
#include<math.h>
#define ll long long int
using namespace std;
ll func(ll n)
{
	return (n*(n+1))/2;
}
ll search(ll low,ll high,ll c)
{
    ll i;
    for(i=low;i<=high;i++)
        if(func(i)>=c)
            return i;
}
int main()
{
	ll no,n,low,high,c;
    cin>>no;
    while(no--)
    {
    	cin>>n>>c;
    	if(func(n)<c)
    		cout<<"-1"<<endl;
    	else
    	{
    		low=1,high=2;
            while(1)
            {
                if(func(low)<c&&func(high)<c)
                {
                    low=high;
                    high=high*2;
                }
                else if(func(low)>c&&func(high)>c)
                {
                    cout<<"-1"<<endl;
                    break;
                }
                else if(func(low)<=c&&func(high)>=c)
                {
                    cout<<search(low,high,c);break;
                }
            }
    	}
    }
    return 0;
}