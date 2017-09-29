#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
struct flight
{
	ll s;
	ll e;
};
ll tasks(flight a[],ll n)
{
	ll start=a[0].e,c=1;
	for(ll i=1;i<n;i++)
	{
		if(a[i].s>start)
		{
			c++;
			start=a[i].e;
		}
	}
	return c;
}
bool compare(flight a,flight b)
{
	return a.e<b.e;
}
//ll tasks(flight a[],ll n)
int main()
{
	ll n,d,i;
	flight a[100000];
	cin>>n>>d;
	for(i=0;i<n;i++)
		cin>>a[i].s>>a[i].e;
	sort(a,a+n,compare);
	for(i=0;i<n;i++)
	{
		cout<<a[i].s<<" "<<a[i].e<<endl;
	}
	cout<<tasks(a,n)<<endl;
	return 0;
}