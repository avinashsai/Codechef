#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int no,n,i,j,num;
	cin>>no;
	while(no--)
	{
		cin>>n>>num;
		vector<int>a(n);
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a.begin(),a.end());
		int l=0,r=n-1;
		bool f=0;
		while(l<r)
		{
			if(a[l]+a[r]==num)
			{
				f=1;break;
			}
			else if(a[l]+a[r]>num)
			r--;
			else
			l++;
		}
		if(f)
		cout<<"yes\n";
		else
		cout<<"no\n";
	}
	return 0;
}
