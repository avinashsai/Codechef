#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long int a[1000],no,n,i,c,k;
cin>>no;
while(no--)
{
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
if(n==1)
cout<<a[0]<<"\n";
else if(n==2||n==3)
cout<<a[n-1]+a[n-2]<<"\n";
else
{
c=0;
k=n%4;
if(k==1)
c=c+a[0];
if(k==2)
c=c+a[1]+a[0];
if(k==3)
c=+a[2]+a[1];
for(i=k;i<n;i=i+4)
c=c+a[i+3]+a[i+2];
cout<<c<<"\n";
}
}
return 0;
}

