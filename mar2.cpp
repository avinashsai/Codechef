#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int a[100000],no,n,i;
	cin>>no;
	while(no--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		bool flag=0;
		for(i=1;i<n-1;i++)
		{
			if(a[i]!=a[i+1])
			{
			if(a[i]!=a[i-1]+1)
			{
				if(a[i]!=a[i+1]-1)
				{
				flag=1;
				cout<<a[i]<<"\n";
				break;
			}
			}}
			else
			{
				flag=1;
				cout<<a[i]<<"\n";
			}
		}
		if(!flag)
		{
			if(a[0]!=a[1]-1)
			cout<<a[0]<<"\n";
			else if(a[n-1]!=a[n-2]+1)
			cout<<a[n-1]<<"\n";
		}
	}
	return 0;
}
