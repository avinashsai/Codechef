#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long int
using namespace std;
int main()
{
	ll a[100000],no,n,i,q,l,r,val,c[100000];
	ll b[1000000][3];
	cin>>no;
	while(no--)
	{
		cin>>n>>q;
		for(i=1;i<=n;i++){
			a[i]=0;
			c[i]=0;
		}
		bool f=0;
		for(i=0;i<q;i++){
			cin>>b[i][0]>>b[i][1]>>b[i][2];
			if(b[i][2]!=0)
				{
					a[b[i][1]]+=1;
					c[b[i][0]]+=1;
				}
		}
		for(i=0;i<q;i++)
		{
			if(abs(a[b[i][0]]-a[b[i][1]])!=b[i][2]||abs(c[b[i][0]]-c[b[i][1]])!=b[i][2])
			{
				f=1;break;
			}
		}
		if(f)
			cout<<"no";
		else
			cout<<"yes";
		cout<<endl;
	}
	return 0;
}