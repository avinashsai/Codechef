#include<iostream>
using namespace std;
int main()
{
	long long int no,c,d,l,rem;
	cin>>no;
	while(no--)
	{
		cin>>c>>d>>l;
		if(l<d*4||l>(4*(c+d)))
		cout<<"no\n";
		else
		{
			rem=l-d*4;
			if(rem%4!=0)
			cout<<"no\n";
			else
			{
				l=rem/4;
				if(c*4>l)
				{
				if((c-l)<=d*2)
				cout<<"yes\n";
				else
				cout<<"no\n";
			}
			else if(c*4==l)
			cout<<"yes\n";
			else
			cout<<"no\n";
			}
		}
	}
	return 0;
}
