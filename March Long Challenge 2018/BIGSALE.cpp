#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long int
using namespace std;
int main()
{
	ll no,n;
	double cost,dec_cost,inc_cost,p,q,d;
	scanf("%lld",&no);
	while(no--)
	{
		scanf("%lld",&n);
		cost = 0.0;
		while(n--)
		{
			scanf("%lf %lf %lf",&p,&q,&d);
			inc_cost = p + ((p*d)/100);
			dec_cost = inc_cost - ((inc_cost*d)/100);
			if(dec_cost < p)
			cost += ((p-dec_cost) * q);
		}
		printf("%0.9lf\n",cost);
	}
	return 0;
}
