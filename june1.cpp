#include<iostream>
using namespace std;
int main()
{
long long int no,n,i,k,s;
cin>>no;
while(no--)
{
cin>>n;
int k=500/n;
s=1;
cout<<s<<" ";
for(i=2;i<=n;i++)
{
s=s+k;
cout<<s<<" ";
}
cout<<"\n";
}
return 0;
}
