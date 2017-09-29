#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long long int a[2000],i,n,no,j,k,c;
cin>>n;
while(n)
{
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
c=0;
for(i=0;i<
cout<<c<<"\n";
cin>>n;
}
return 0;
}
