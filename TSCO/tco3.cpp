#include<iostream>
using namespace std;
int main()
{
	int a[100000],n,no,i,j,c=0;
	cin>>no;
	while(no--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=n-1;i>=1;i--)
		{
			c=1;
			for(j=i-1;j>=0;j--)
			{
				if(a[j]>a[i])
					break;
				else
					c++;
			}
			a[i]=c;
		}
		a[0]=1;
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}