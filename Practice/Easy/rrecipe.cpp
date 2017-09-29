#include<iostream>
#include<string.h>
#define s 10000009
using namespace std;
int main()
{
string a;
long long int no,n,mid,i,c,f1,f2,p;
cin>>no;
while(no--)
{
cin>>a;
n=a.length();
f1=0,f2=0;
p=0;
if(n==1)
{
if(a[0]=='?')
cout<<"26\n";
else
cout<<"1\n";}
if(n>=2)
{
if(n%2==0)
mid=n/2-1;
else
mid=(n-3)/2;
c=1;
for(i=0;i<=mid;i++)
{
if(a[i]=='?'&&a[n-i-1]=='?')
{
c=c*26;
f2=1;
c=c%s;}
else if((a[i]=='?'&&a[n-i-1]!='?')||(a[n-i-1]=='?'&&a[i]!='?'))
{
p++;
f2=1;
p=p*c;
c=c%s;
}
else if(a[i]!=a[n-i-1])
{
f1=1;break;}
}
if(!f1&&f2)
{
if(n%2==1)
{
if(a[mid+1]=='?')
{
c=c+26;
c=c%s;}}
cout<<c<<"\n";}
else if(!f1&&!f2)
cout<<"1\n";
else 
cout<<"0\n";}
}
return 0;
}
