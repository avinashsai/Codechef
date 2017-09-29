#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long long int a[100000];
	long int sum=0,n,i,no,left;
	cin>>no;
	while(no--)
	{
		cin>>n;
		cin>>a[0];
		sum=a[0];
		for(i=1;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		bool f=0;
		/*c[n-1]=a[n-1];
		for(i=n-2;i>=0;i--)
			c[i]=c[i+1]+a[i];
		bool f=0;
		/*if(n==1){
			cout<<"1"<<endl;
			f=1;
		}*/
		left=0;
		for(i=0;i<n;i++)
		{
			sum=sum-a[i];
			if(sum==left)
			{
				f=1;
				cout<<i<<endl;
				break;
			}
			left+=a[i];
		}
        if(!f)
        	cout<<"-1"<<endl;
        /*memset(b,0,100000);
        memset(c,0,100000);*/
	}
	return 0;
}