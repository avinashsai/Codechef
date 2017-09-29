#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#define ll long long int
using namespace std;
int main()
{
	ll no,p,k,l,i,j,m,sum,x;
	cin>>no;
	while(no--)
	{
		cin>>p>>k>>l;
		vector<ll>a(l);
		for(i=0;i<l;i++)
		cin>>a[i];
		sort(a.begin(),a.end(),greater<ll>());
		x=1;
		sum=0;
		//m=ceil(l/p);
		for(i=0,j=1;i<l;i++,j++)
		{
			sum+=x*a[i];
			if(j%k==0)
			x++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
