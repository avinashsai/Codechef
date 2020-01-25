#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1000000000007
int main()
{
	ll t,n,a,b,c,l;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b>>c;
		ll min = INF;
		for(ll i=0;i<n;i++)
		{
			cin>>l;
			ll s = abs(l-b)+c+abs(l-a);
			if(s<min)
			min = s;
		}
		cout<<min<<endl;
	}
	
	return 0;
}
