#include<iostream>
#define ll long long int
using namespace std;
bool sorted(ll a[][1000],int i,int n)
{
	for(int j=2;j<n;j++)
	{
		if(a[i][j]<a[i][j+1]&&a[i][j]<a[i][j-1]||a[i][j]>a[i][j+1]&&a[i][j]>a[i][j-1])
		return 0;
	}
	return 1;
}
void swap(ll *a,ll *b)
{
	ll temp=*a;
	*a=*b;
	*b=temp;
}
int partition(ll a[][1000],int i,int l,int h)
{
	ll x=a[i][h],k=l-1,j;
	for(j=l;j<h;j++)
	{
		if(a[i][j]<=a[i][h])
		{
			k++;
			swap(&a[i][j],&a[i][k]);
		}
	}
	swap(&a[i][k+1],&a[i][h]);
	return k+1;
}
void sort(ll a[][1000],int i,int l,int h)
{
	if(l<h)
	{
		int p=partition(a,i,l,h);
		sort(a,i,l,p-1);
		sort(a,i,p+1,h);
	}
}
int main()
{
	ll a[1000][1000];
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	cin>>a[i][j];
	for(i=1;i<=n;i++)
	{
		if(!sorted(a,i,n))
		sort(a,i,1,n);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}
