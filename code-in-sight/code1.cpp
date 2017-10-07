#include<iostream>
#define ll long long int 
using namespace std;
int main()
{
	ll no,n,l,k;
	cin>>no;
	while(no--)
	{
	cin>>n>>k;
	ll s=0;
	while(n--)
	{
	cin>>l;
	if(l<=0)
	s++;
	}
	if(s<k)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	}
	return 0;
}