#include<iostream>
#include<string.h>
#define ll long long int
using namespace std;
int b[10];
void digits(ll n)
{
	while(n)
	{
		b[n%10]=1;
		n=n/10;
	}
}
bool check()
{
	for(int i=0;i<10;i++)
	if(b[i]!=1)
	return 0;
	return 1;
}
int main()
{
	ll no,n,i,f=0,m;
	cin>>no;
	while(no--)
	{
		cin>>n;
		if(n==0)
		cout<<"INSOMNIA\n";
		else
		{
			i=1;
			m=n;
			while(1)
			{
				digits(n);
				if(check())
				{
					cout<<n<<"\n";
					break;
				}
				i++;
				n=i*m;
			}
		}
		for(i=0;i<10;i++)
		b[i]=0;
	}
	return 0;
}
