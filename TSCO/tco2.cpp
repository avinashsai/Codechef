#include<iostream>
using namespace std;
int main()
{
	int no,n;
	cin>>no;
	while(no--)
	{
		cin>>n;
		if(n&1)
			cout<<"N"<<endl;
		else
			cout<<"Y"<<endl;
	}
	return 0;
}