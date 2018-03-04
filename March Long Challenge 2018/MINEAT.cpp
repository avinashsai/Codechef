#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long int
using namespace std;
ll time(vector<ll>a,ll n,ll t)
{
	ll c = 0;
	for(ll i=0;i<n;i++)
	{
		if(a[i]<t)
		c+=1;
		else{
		if(a[i]%t==0)
		c=c+a[i]/t;
		else
		c=c+a[i]/t+1;
	}
	}
	return c;
}
ll calculate(vector<ll>a,ll low,ll high,ll h,ll n)
{
	ll mid,time_mid,time_mid_minus1;
	while(low<=high)
	{
		mid = (low+high)/2;
		time_mid = time(a,n,mid);
		if(time_mid<=h &&(mid==0 || time(a,n,mid-1)>h))
		return mid;
		else if(time_mid>h)
		low = mid+1;
		else
		high = mid-1;
	}
}
int main()
{
	ll t,n,h,i,j;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&h);
		vector<ll>a(n);
		ll sum=0;
		for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		sum+=a[i];
	}
	//bool flag=0;
		ll low=1,high=2,time_low,time_high;
		while(1)
		{
			time_low = time(a,n,low);
			time_high = time(a,n,high);
			if(time_low>h&&time_high>h)
			low=high,high=high*2;
			else if(time_low>=h&&time_high<=h){
			printf("%lld\n",calculate(a,low,high,h,n));
			break;
		}
		}
	//	printf("%lld\n",min);
	}
	return 0;
}
