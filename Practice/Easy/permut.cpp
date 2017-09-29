#include<iostream>
using namespace std;
int main()
{
int a[1000],in[1000]={0},f[3000],n,i,c=1,e,t,s,j;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a[i];
in[i]=i;
}
s=1,j=0,t=0;
while(c<=n)
{
f[j++]=s;
in[s]=1;
c++;
e=a[s];
while(s!=e&&c<=n)
{
f[j++]=e;
in[e]=1;
c++;
e=a[e];
}
f[j++]=e;
in[e]=1;
t++;
f[j++]=0;
while(in[s]==1)
s++;
}
cout<<t<<"\n";
for(i=0;i<j;)
{
if(f[i]!=0)
cout<<f[i++]<<" ";
else
{
cout<<"\n";i++;}
}
return 0;
}

