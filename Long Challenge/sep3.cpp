#include<iostream>
#include<stdio.h>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
	string s;
	bool a[26];
	ll b[10];
	ll no,n,i,j,s1,s2;
	cin>>no;
	while(no--)
	{
		cin>>s;
		n=s.length();
		for(i=0;i<26;i++)
			a[i]=0;
		for(i=0;i<10;i++)
			b[i]=0;
		for(i=0;i<n;i++)
		++b[s[i]-'0'];
	    for(i=5;i<=9;i++)
	    {
	    	if(b[6]&&b[i])
	    	a[i-5]=1;
	    }
	    for(i=0;i<=9;i++)
	    {
	    	if(b[7]&&b[i])
	    		a[5+i]=1;
	    }
	    for(i=0;i<=9;i++)
	    {
	    	if(b[8]&&b[i])
	    		a[15+i]=1;
	    }
	    if(b[9]&&b[0])
	    	a[25]=1;
	    if(b[6]<2)
	    	a[1]=0;
	    if(b[7]<2)
	    	a[12]=0;
         if(b[8]<2)
         	a[23]=0;
		for(int k=0;k<26;k++)
			if(a[k])
				printf("%c",k+65);
			cout<<endl;
	}
	return 0;
}