#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long long int a[100000],no,n,i,s,t,p,max;
cin>>no;
while(no--)
{
cin>>n;
bool f=0;
p=0;
for(i=0;i<n;i++)
{
cin>>a[i];
if(a[i]>0)
f=1;
p=p+a[i];}
if(!f)
cout<<p<<"\n";
else
{
s=0;
sort(a,a+n,greater<long long int>());
for(i=0;i<n&&a[i]>=0;i++)
s=s+a[i];
if(i<n)
{
t=i;
max=s*t;
p=i;
p++;
while(i<n)
{
if(((s+a[i])*(p))>max)
{
max=((s+a[i])*(p));
s=s+a[i];
}
else
break;
i++;
p++;
}
while(i<n)
{
max+=a[i];
i++;
}
cout<<max<<"\n";
}
else
cout<<s*n<<"\n";
}
}
return 0;
}
