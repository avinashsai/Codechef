#include<iostream>
using namespace std;
bool in(int a[],int s,int n)
{
	int i;
	for(i=1;i<s;i++)
	{
		if(a[i]>a[i+1])
			return 0;
	}
	return 1;
}
bool de(int a[],int s,int n)
{
	int i;
	for(i=n;i>s;i--)
	{
		if(a[i]>a[i-1])
			return 0;
	}
	return 1;
}
bool eq(int a[],int s,int e)
{
	int i;
	for(i=s;i<=e;i++)
		if(a[i]!=7)
			return 0;
		return 	1;
}
int main()
{
  int a[100],b[7];
  int no,n,i,ind;
  cin>>no;
  while(no--)
  {
  	cin>>n;
  	bool f=0;
  	for(i=1;i<=7;i++)
  		b[i]=0;
  	for(i=1;i<=n;i++)
  	{
  		cin>>a[i];
  		b[a[i]]=1;
  		if(a[i]>7)
  			f=1;
  	}
  	for(i=1;i<=7;i++)
  		if(b[i]==0)
  			f=1;
  		if(!f)
  		{
  			int s,e;
  			for(i=1;i<=n;i++)
  			{
  				if(a[i]==7){
  					s=i;
  					break;
  				}
  			}
  			for(i=n;i>=1;i--)
  			{
  				if(a[i]==7){
  					e=i;
  					break;
  				}
  			}
  			//cout<<s<<" "<<e<<" ";
  			if(in(a,s,n)&&de(a,e,n)&&eq(a,e,s))
  			{
  				for(i=1;i<=n/2;i++)
  				{
  					if(a[i]!=a[n-i+1])
  					{
  						f=1;break;
  					}
  				}
  				if(!f)
  					cout<<"yes"<<endl;
  				else
  					cout<<"no"<<endl;
  			}
  			else
  				cout<<"no"<<endl;
  		}
  		else
  		cout<<"no"<<endl;
 }
	return 0;
}