#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<stdio.h>
#define ll long long int
using namespace std;
int main()
{
	ll no,n,s,c,i,j,k;
	scanf("%lld",&no);
	while(no--)
	{
		scanf("%lld",&n);
		vector<ll>a(n);
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		scanf("%lld",&s);
		sort(a.begin(),a.end());
		c=0;
		for(i=n-1;i>=2;i--)
		{
			j=i-1,k=0;
			while(j>k)
			{
				if(a[i]+a[j]+a[k]<=s)
					k++;
				else 
				{
					c=c+(j-k);
					j--;
					//cout<<c<<endl;
				}
			}

		}
		cout<<c<<endl;
	}
	return 0;
}