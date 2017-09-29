#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long int a[100000],i,n,no,c,k;
cin>>no;
while(no--)
{
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
k=1;
for(i=1;i<n;i++)
{
if(a[i]!=a[i-1])
k++;}
cout<<k<<"\n";
}
return 0;
}
