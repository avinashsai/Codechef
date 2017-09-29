#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int a[100000],no,n,i,c,j;
		cin>>n;
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		c=0;
		j=0;
		for(i=j;i<n;)
		{
			if(a[i]-a[j]<=6)
				i++;
			else
			{
				c++;
				j=i;
			}
		}
		if(j<n)
			c++;
		cout<<c<<endl;
	return 0;
}