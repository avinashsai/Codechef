#include<iostream>
#include<math.h>
#define ll unsigned long long int
using namespace std;
void cal(ll n,ll k)
{
	int *a= new int[n];
	int *b=new int[n];
	int i=-1;
	while(k)
	{
		a[++i]=k%2;
		k=k/2;
	}
	if(i<n-1)
      {
      	while(i<n){
      		a[++i]=0;
      	}
      }
      ll sum=0;
      ll j=0;
      while(j<n){
      	sum=sum*2+a[j];j++;}
     cout<<sum;
	}
int main()
{
	ll no,n,k;
	cin>>no;
	while(no--)
	{
		cin>>n>>k;
		cal(n,k);
		cout<<endl;
	}
	return 0;
}
