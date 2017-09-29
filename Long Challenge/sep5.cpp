#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
#define s 1000000007
#define ll long long int
using namespace std;
int main()
{
	ll a[100000],n,i,no,b[100000][3],q,l,c[100000],j,k;
	scanf("%lld",&no);
	while(no--)
	{
		scanf("%lld %lld",&n,&q);
		bool f=0;
		memset(c,0,100000);
		memset(a,0,100000);
		memset(b,0,sizeof(b));
		for(i=1;i<=q;i++)
		{
			scanf("%lld %lld %lld",&b[i][1],&b[i][2],&b[i][3]);
			if(b[i][1]==2)
               f=1;
		}
		if(f){
		for(i=q;b[i][1]!=1;i--)
		{
           for(j=b[i][2];j<=b[i][3];j++)
           	++c[j];
		}
		i=q;
		while(b[i][1]!=1)
		{
			if(c[i])
			{
				for(j=b[i][2];j<=b[i][3];j++)
					c[j]=c[j]+c[i];
			}
			i--;
		}
		i=1;
		while(b[i][1]!=2)
		{
			for(j=b[i][2];j<=b[i][3];j++)
				a[j]=(a[j]+c[i]+1)%s;
			i++;
		}
	}
	else
	{
         for(i=1;i<=q;i++)
         {
         	for(j=b[i][1];j<=b[i][2];j++)
         		a[j]=(a[j]+1)%s;
         }
         }
		for(i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}