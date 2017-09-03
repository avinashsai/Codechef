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
	ll no,n,c,p;
	double x;
	cin>>no;
	while(no--)
	{
		cin>>n>>c;
		if(func(n)<c)
			cout<<"-1"<<endl;
		else{
        x=(sqrt(1+8*c));
        cout<<ceil((x-1)/2)<<endl;
    }
	}
	return 0;
}