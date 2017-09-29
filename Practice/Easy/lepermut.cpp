#include<iostream>
using namespace std;
int main()
{
long int a[100],n,no,i,l,t,j;
cin>>no;
while(no--)
{
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
if(n==1)
cout<<"YES\n";
else
{
l=0,t=0;
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(a[i]>a[j])
t++;
for(i=0;i<n-1;i++)
if(a[i]>a[i+1])
l++;
if(l==t)
cout<<"YES\n";
else
cout<<"NO\n";}
}
return 0;
}
