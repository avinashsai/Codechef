#include<iostream>
#include<vector>
#include<stdio.h>
#include<math.h>
#define ll long long int
#define s 1000000007
using namespace std;
int main()
{
	ll no,q,i,n,l,r,type;
	cin>>no;
	while(no--)
	{
		scanf("%lld %lld",&n,&q);
		vector<ll>a(n);
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		ll sum;
		while(q--)
		{
			scanf("%lld",&type);
			if(type==1){
				sum=0;
				scanf("%lld",&l);
				for(i=l-1;i<n;i=i+l)
					sum=(sum+(a[i]*a[i])%s)%s;
				sum=sum%s;
				printf("%lld\n",sum);
			}
			if(type==2)
			{
		     scanf("%lld %lld",&l,&r);
				a[l-1]=r;
			}
		}
	}
}