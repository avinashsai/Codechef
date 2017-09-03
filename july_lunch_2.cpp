#include<iostream>
#define ll long long int
using namespace std;
ll max(ll e,ll f)
{
return e>=f?e:f;
}
int main()
{
	ll a[1000000],no,n,i,j,c;
	cin>>no;
	while(no--)
	{
		cin>>n;
		c=0;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((a[i]|a[j])<=max(a[i],a[j]))
					c++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}