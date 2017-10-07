#include<iostream>
using namespace std;
int main()
{
	int no,l,m,n,c,s;
	cin>>no;
	while(no--)
	{
		cin>>l>>m>>n;
		if(m<=n||m==0||(m==0&&n==0))
			cout<<"-1\n";
		else
		{
			if(l<=m)
				cout<<l<<"\n";
			else
			{
				int k=(l/(m-n))-1;
				int d=(m-n)*k;
				d=l-d;
				s=k*(m+n)+d;
				cout<<s<<"\n";
			}
		}
	}
	return 0;
}