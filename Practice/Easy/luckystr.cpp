#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s[50],p,l;
int n,k,i,j,f,t,m,b,flag;
cin>>k>>n;
for(i=0;i<k;i++)
cin>>s[i];
for(i=1;i<=n;i++)
{
cin>>p;
flag=0;
for(j=0;j<k;j++)
{
l=s[j];
t=l.length();
if(t<=p.length())
{
for(b=0;b<p.length();b++)
{
f=0;
for(m=0;m<t;m++)
{
if(l[m]!=p[b+m])
{
f=1;break;
}
}
if(!f)
{
flag=1;
break;}
}
}
if(flag)
{
break;
}
}
if(flag||p.length()>=47)
cout<<"Good\n";
else
cout<<"Bad\n";
}
return 0;
}


