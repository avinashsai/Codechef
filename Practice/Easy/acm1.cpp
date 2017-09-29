#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
long long int no,m,n,k;
cin>>no;
while(no--)
{
cin>>n>>m;
if(n>=m)
cout<<n-m<<"\n";
else
{
k=m%n;
if(k!=0)
cout<<n-k<<"\n";
else
cout<<"0\n";
}
}
return 0;
}
