#include<iostream>
#include<string.h>
#define ll long long int
using namespace std;
int a[1000000],b[1000000];
void seive()
{
	ll i,j;
	for(i=1;i<=1000000;i++)
		a[i]=0,b[i]=0;
	a[1]=1;
	for(i=2;i*i<=1000000;i++)
	{
		if(a[i]==0)
			for(j=i*2;j<=1000000;j=j+i)
				a[j]=1;
	}
	b[1]=0;
	for(i=2;i<=1000000;i++){
		if(!a[i])
			b[i]=b[i-1]+1;
		else
			b[i]=b[i-1];
	}
		
}
int main()
{
   ll no,l,r;
   seive();
   cin>>no;
   while(no--)
   {
   	cin>>l>>r;
   	if(l==1)
    cout<<b[r]<<endl;
else
	cout<<b[r]-b[l-1]<<endl;
   }
   return 0;
}