#include<iostream>
#define ll long long int
using namespace std;
int main()
{
	ll no,n,t,i,b,max;
	cin>>no;
	while(no--)
	{
		cin>>n>>b;
		i=(n/2);
		max=((n*i-i*i)/b);
		i=n/2-1;
		t=((n*i-i*i)/b);
		if(t>max)
			max=t;
		i=n/2+1;
		t=((n*i-i*i)/b);
		if(t>max)
			max=t;
		cout<<max<<endl;
	}
	return 0;
}