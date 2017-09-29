#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long long int a[100000],no,n,i,c,s;
cin>>no;
while(no--)
{
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
c=0,s=0;
for(i=0;i<n-1;i++)
{
if(a[i]==a[i+1])
c++;
else
{
s=s+c;
c=0;}
}
cout<<(n*(n-1))/2-s<<"\n";
}
return 0;
}
