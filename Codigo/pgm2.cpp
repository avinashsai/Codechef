#include <iostream>
#define ll long long int
using namespace std;
int main()
{
	ll no,n;
	cin>>no;
	while(no--)
	{
		cin>>n;
		if((n%4)==0)
			cout<<"HAPPY"<<endl;
		else
			cout<<"SAD"<<endl;
	}
	return 0;
}