#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long long int a[150000]={0},i,n,m,k,p=0,b[50000];
cin>>n>>m>>k;
n=(n+m+k);
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
k=0,m=1;
for(i=0;i<n-1;i++)
{
if(a[i]==a[i+1])
m++;
else
{
if(m>=2)
{
p++;
b[k++]=a[i];}
m=1;}}
if(a[n-2]==a[n-1])
b[k++]=a[n-1];
cout<<p<<"\n";
for(i=0;i<k;i++)
cout<<b[i]<<"\n";
return 0;
}
