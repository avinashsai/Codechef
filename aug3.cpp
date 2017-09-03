/*
author:avinash
college:nit trichy
*/
#include<iostream>
#include<algorithm>
#include<string.h>
#define ll long long int
using namespace std;
struct st
{
	ll sal;
	ll job;
};
ll findmax(ll min,st c[],char a[1000][1000],ll n,ll row)
{
	ll max=min,ind=0;
	ll i;
    for(i=1;i<=n;i++)
    {
    	if(a[row][i]=='1'&&c[i].job>0&&c[i].sal>=max)
    	{
    		ind=i;
    		max=c[i].sal;
    	}
    }
    return ind;
}
int main()
{
	char a[1000][1000];
	ll b[1000],n,m,i,j,no,num,sum,com,ind;
	st c[1000];
	int d[1000]={0};
	cin>>no;
	while(no--)
	{
		cin>>m>>n;
		for(i=1;i<=m;i++)
			cin>>b[i];
		for(i=1;i<=n;i++){
			cin>>c[i].sal>>c[i].job;
		}
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				cin>>a[i][j];
			sum=0,num=0,com=0;
			for(i=1;i<=m;i++)
			{
                ll ind=findmax(b[i],c,a,n,i);
                //cout<<ind<<" ";
                if(ind!=0)
                {
                	if(d[ind]==0)
                		com++;
                	d[ind]=1;
                	c[ind].job=c[ind].job-1;
                	sum=sum+c[ind].sal;
                	num++;
                }
			}
			memset(d,0,sizeof(d));
			cout<<num<<" "<<sum<<" "<<n-com<<endl;
	}
	return 0;
}