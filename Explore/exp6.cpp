#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
long long int sum=0,n,i,max=-1,a[300],s,t=0,p;
cin>>n;
s=floor(0.7*n);
for(i=1;i<=n;i++)
cin>>a[i];
for(i=1;i<=n;i++)
{
cin>>p;
sum+=p;
if(floor(a[i]/3)<=p)
t++;
}
for(i=1;i<=8;i++)
{
cin>>p;
if(p>max)
max=p;
}
if(sum>max&&t>=s)
cout<<"VIRAT KOHLI IS CHAMPION";
else
cout<<"RCB TRY AGAIN IN NEXT IPL";
return 0;
}
