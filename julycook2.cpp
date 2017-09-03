#include<iostream>
#include<string.h>
#define ll long long int
using namespace std;
bool per(ll n)
{
	ll l=1,m,h=n;
	while(l<=h)
	{
       m=(l+h)/2;
       if(m*m==n)
       	return 1;
       else if(m*m>n)
       	h=m-1;
       else
       	l=m+1;
	}
	return 0;
}
int main()
{
	ll a,b,i,count=0,j;
		cin>>a>>b;
		for(i=1;i<=a;i++)
			for(j=1;j<=b;j++)
				if(per(i*i+j))
					count++;
		cout<<count<<endl;
		return 0;
}