#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int a[1000][1000],i,n,no,j,c,k;
	cin>>no;
	while(no--)
	{
		c=0,k=0;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>a[i][j];
				if(a[i][j])
				c++;
				else
				k++;
			}
		}
		if(c==0||(c==n&&k>0))
		cout<<"0\n";
		else if(c==n*n)
		cout<<n-1<<"\n";	
		else
		{
			int t=1;
			while(t<=n)
			{
				int c=0;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(abs(i-j)>t)
					c++;
				}
			}
			if(c<=k)
			{
				cout<<t<<"\n";
				break;
			}
			else
			t++;}
		}
	}
	return 0;
}
