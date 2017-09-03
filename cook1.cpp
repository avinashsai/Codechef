#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long int a[26],b[26],i,n,no;
	long long int sum;
	string s;
	cin>>no;
	while(no--)
	{
		for(i=0;i<26;i++)
			cin>>a[i];
		for(i=0;i<26;i++)
			b[i]=0;
		sum=0;
		cin>>s;
		n=s.length();
		for(i=0;i<n;i++)
			b[s[i]-97]=1;
		//for(i=0;i<26;i++)
		//	cout<<b[i]<<" ";
		for(i=0;i<26;i++){
			if(!b[i])
				sum=sum+a[i];
		}
			cout<<sum<<endl;
	}
	return 0;
}