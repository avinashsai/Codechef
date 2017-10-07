#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(n==1&&m==1)
		cout<<"1";
	else
	{
		int r,c;
		if(n%2==0)
			r=n/2;
		else
			r=n/2+1;
		if(m%2==0)
			c=m/2;
		else
			c=m/2+1;
		cout<<c*r;
	}
	return 0;
}