#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	long int no,n,i,in;
	cin>>no;
	while(no--)
	{
		cin>>s;
		n=s.length();
		in=0;
		for(i=1;i<n;i++)
		{
			if(s[i]==s[0])
			{
				if(i>in)
					in=i;
			}
		}
		cout<<s[n-1]-s[in]<<endl;
	}
	return 0;
}