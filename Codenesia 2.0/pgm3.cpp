#include<iostream>
#include<string.h>
#include<vector>
#include<stdlib.h>
#include<stdio.h>
#define ll long long int
using namespace std;
int b[1000000];
int c[1000000];
void seive()
{
	ll i,j;
	for(i=1;i<=1000000;i++)
		c[i]=0;
	c[1]=1;
	for(i=2;i*i<=1000000;i++)
	{
		if(c[i]==0)
		{
			for(j=i*2;j<=1000000;j=j+i)
				c[j]=1;
		}
	}
}
ll count()
{
	ll max=-1,i,sum=0,j;
	for(i=2;i*i<=1000000;i++)
	{
		if(c[i]==0)
		{
			sum=b[i];
			for(j=i*2;j<=1000000;j=j+i)
				sum+=b[j];
			if(sum>max)
				max=sum;
		}
	}
	return max;
}
int main()
{
	ll no,n,i;
	seive();
   scanf("%lld",&no);
   while(no--)
   {
   	scanf("%lld",&n);
   	vector<ll>a(n);
   	memset(b,0,1000000);
   	for(i=0;i<n;i++){
   		scanf("%lld",&a[i]);
   		++b[a[i]];
   	}
   	cout<<count()<<endl;
   }
   return 0;
}