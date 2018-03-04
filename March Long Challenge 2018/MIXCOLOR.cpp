#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll no,n,i;
	scanf("%lld",&no);
	while(no--)
	{
		scanf("%lld",&n);
		vector<ll>a(n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		sort(a.begin(),a.end());
		ll count = 0;
		for(i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
			count++;
		}
		printf("%lld\n",count);
	}
	return 0;
}
