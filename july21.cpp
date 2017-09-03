#include<iostream>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
	string s;
	ll  i,max,val,no,n;
	cin>>no;
	while(no--)
	{
		cin>>s;
		n=s.length();
		max=0,val=1;
		for(i=0;i<n;i++)
		{
			if(s[i]=='<')
				val++;
			if(s[i]=='>')
				val--;
			if(val==0)
			{
				max=max+1;
				val=1;
			}
			if(val>max)
				max=val;
			//cout<<val<<" ";
		}
		cout<<max<<endl;
	}
	return 0;
}