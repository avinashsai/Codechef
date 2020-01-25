#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t,n,s,p,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll max = -1;
		for(ll i=0;i<n;i++)
		{
			cin>>s>>p>>c;
			ll sum = (p/(s+1)) * c;
			if(sum>max)
			max = sum;
		}
		cout<<max<<endl;
	}
	return 0;
}
