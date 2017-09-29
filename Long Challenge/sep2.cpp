#include<iostream>
#include<stdio.h>
#define ll long long int
using namespace std;
void swap(ll *a,ll *b)
{
	ll temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	ll a[100000],no,n,i;
	cin>>no;
	while(no--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
			a[i]=i;
       	for(i=1;i<n;i=i+2)
       		swap(&a[i],&a[i+1]);
       if(n&1)
       	swap(&a[n],&a[n-1]);
		for(i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}