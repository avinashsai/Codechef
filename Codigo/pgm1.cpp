#include<iostream>
#include<math.h>
#include<stdio.h>
#define ll long long int
using namespace std;
int a[1000001];
void seive()
{
   for(int i=1;i<=1000000;i++)
   	a[i]=0;
   a[1]=1,a[0]=1;
   for(int i=2;i*i<=1000000;i++)
   {
   	if(a[i]==0){
   	for(int j=i*2;j<=1000000;j=j+i)
   		a[j]=1;
   }
   }
}
int main()
{
	ll no;
	ll n,k;
	seive();
	scanf("%lld",&no);
	while(no--)
	{
		scanf("%lld",&n);
		if(n==0||n==1)
			cout<<"No\n";
		else{
		 k=sqrt(n);
         if(a[k]==0&&k*k==n)
         	printf("Yes\n");
         else
         	printf("No\n");
	}
	}
	return 0;
}