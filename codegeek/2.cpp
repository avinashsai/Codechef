#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int no,n,i;
	string s;
	cin>>no;
	while(no--)
	{
		cin>>s;
		n=s.length();
		int l=0,r=0,c=1;
		for(i=0;i<n;i++)
		{
			if(s[i]==s[i+1])
			c++;
			else
			{
				if(s[i]=='L')
				l++;
				else
				r++;
				c=1;
			}
		}
		if(l<=r)
		cout<<l;
		else
		cout<<r;
		cout<<endl;
	}
	return 0;
}
