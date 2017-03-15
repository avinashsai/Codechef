#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int a[20000],b[20000],no,sum1,sum2,sum3,sum4,n,i;
	cin>>no;
	while(no--)
	{
		cin>>n;
		sum1=0,sum2=0,sum3=0,sum4=0;
		for(i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++)
		cin>>b[i];
		for(i=0;i<n;i=i+2)
		{
			sum1+=a[i];
			sum3+=b[i];
		}
		for(i=1;i<n;i=i+2)
		{
			sum2+=b[i];
			sum4+=a[i];
		}
		if(sum1+sum2<sum3+sum4)
		cout<<sum1+sum2<<"\n";
		else
		cout<<sum3+sum4<<"\n";
	}
	return 0;
}
