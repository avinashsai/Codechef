#include<iostream>
#include<math.h>
#define ll long long int
using namespace std;
ll func(ll n)
{
	return (n*(n+1))/2;
}
int main()
{
	ll no;
	double n,c,x;
	cin>>no;
	while(no--)
	{
		cin>>n>>c;
		if(func(n)<c)
			cout<<"-1"<<endl;
		else{
        x=((sqrt(1+8*c)-1)/2);
        //cout<<floor(x)<<" ";
        if(func(ceil(x))>=c)
        	cout<<ceil(x)<<endl;
        else
        	cout<<"-1"<<endl;
    }
	}
	return 0;
}