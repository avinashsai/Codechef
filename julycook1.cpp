#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
int main()
{
	ll no,n,sum,l,i;
	cin>>no;
	while(no--)
	{
		cin>>n;
		sum=1;
		for(i=0;i<n;i++)
		{
			cin>>l;
			sum=sum|l;
		}
		cout<<sum<<endl;
}
	return 0;
}