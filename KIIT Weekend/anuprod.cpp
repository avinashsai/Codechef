#include<iostream>
#include<string.h>
#define ll long long int
#define s 1000000007
using namespace std;
int main()
{
	ll n,p=1,l;
	cin>>n;
	while(n--)
	{
		cin>>l;
		p=(p*l)%s;
	}
	cout<<p%s;
	return 0;		
}