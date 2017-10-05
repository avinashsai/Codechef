#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define ll long long int
using namespace std;
ll num(ll n)
{
	ll c=0;
	while(n)
	{
		n=(n&(n-1));
		c++;
	}
	return c;
}
int main()
{
	ll no,n,k;
	cin>>no;
	while(no--)
	{
		cin>>n;
		k=num(n);
		cout<<k<<endl;
	}
	return 0;
}