#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
long int a[100000],max,no,n,i,s,in;
cin>>no;
while(no--)
{
cin>>n;
max=INT_MIN;
for(i=1;i<=n;i++)
{
cin>>a[i];
if(a[i]>max)
{
max=a[i];
in=i;}}
s=max+in-1;
max=s;
for(i=in;i<=n;i++)
{
if(s-i-1<a[i])
{
s=s+(a[i])-(s-i+1);}
}
cout<<s<<"\n";
}
return 0;
}

