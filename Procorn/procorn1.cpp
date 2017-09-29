#include<iostream>
#include<algorithm>
#define ll long long int 
using namespace std;
int main()
{
	ll no,n,i,sum1,sum2,m;
	cin>>no;
	while(no--)
	{
		cin>>n>>m;
		sum1=0,sum2=0;
		while(n--)
		{
			cin>>i;
			sum1+=i;
		}
		while(m--)
		{
			cin>>i;
			sum2+=i;
		}
       if(sum1>=sum2)
       	cout<<"Snow"<<endl;
       else
       	cout<<"Death"<<endl;
	}
}