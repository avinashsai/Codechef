#include<iostream>
using namespace std;
int main()
{
long long int n,no,i;
cin>>no;
while(no--)
{
cin>>n;
if(n%4!=1)
cout<<"BOB\n";
else
cout<<"ALICE\n";
}
return 0;
}

