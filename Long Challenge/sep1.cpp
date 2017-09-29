#include<iostream>
#include<stdio.h>
#include<limits.h>
#include<algorithm>
#define ll long long int
using namespace std;
int main()
{
	ll a[100001],no,n,i,l;
	cin>>no;
	while(no--)
	{
		cin>>n;
		a[0]=0;
		for(i=1;i<=n;i++)
		{
			cin>>l;
			a[i]=a[i-1]+l;
		}
		ll min_i=1,min=a[1]+a[n];
		for(i=2;i<=n;i++)
		{
			if(a[i]+(a[n]-a[i-1])<min)
			{
				min=(a[i]+a[n]-a[i-1]);
				min_i=i;
			}
		}
		cout<<min_i<<endl;
	}
	return 0;
}