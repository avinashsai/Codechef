#include<iostream>
#define ll long long int
using namespace std;
ll a[100000];
int main()
{
	a[1]=2,a[2]=7;
	ll i,no,n;
	for(i=3;i<=100000;i++)
	{
		if(i&1)
			a[i]=a[i-1]+7;
		else
			a[i]=a[i-1]+3*a[i-2];
	}
	cin>>no;
	cout<<a[100000];
	/*while(no--)
	{
		cin>>n;
		cout<<a[100000]<<
	}*/
	return 0;
}
