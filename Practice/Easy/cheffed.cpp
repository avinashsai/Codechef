#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int count(int n)
{
	int c=0;
	while(n)
	{
		c = c+n%10;
		n=n/10;
	}
	return c;
}
int main()
{
	ll n,i,j,c=0;
	cin>>n;
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=100;j++)
		{
			if(count(j)==i)
			{
				if(count(n-j-i)==j){
					c++;
					//cout<<n-j-i<<" ";
				}
			}
		}
	}
	cout<<c;
	return 0;
}