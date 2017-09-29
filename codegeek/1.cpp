#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
	int no,n,i,r;
	string s;
	cin>>no;
	while(no--)
	{
		cin>>n;
		vector<int>a(n);
		for(i=0;i<n;i++)
		cin>>a[i];
		cin>>s;
		cin>>r;
		int m=s.length(),c=0;
		for(i=0;i<m;i++)
		{
			if(s[i]=='1')
			c++;
			if(c==3)
			{
				cout<<a[(i+r)%n]<<endl;break;
			}
		}
	}
	return 0;
}
