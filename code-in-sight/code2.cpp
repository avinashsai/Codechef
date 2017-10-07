#include<iostream>
#include<string.h>
#define ll long long int
using namespace std;
int a[1000000];
void seive()
{
	for(int i=1;i<=1000000;i++)
		a[i]=0;
	a[1]=1;
	for(int i=2;i*i<=1000000;i++)
	{
		if(a[i]==0)
		{
			for(int j=i*2;j<=1000000;j=j+i)
				a[j]=1;
		}
	}
}
int main()
{
	ll n,m,s=0;
	seive();
	cin>>n>>m;
	for(ll i=n;i<=m;i++)
	{
		if(i<=m&&i+2<=m)
		{
			if(!a[i]&&!a[i+2])
				s++;
		}
	}
	cout<<s;
	return 0;
}