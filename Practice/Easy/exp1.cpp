#include<iostream>
using namespace std;
int gcd(long long int a,long long int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
int main()
{
long long int k,x,a[3],i;
for(i=0;i<3;i++)
cin>>a[i];
k=a[0];
for(i=1;i<3;i++)
{
k=((a[i]*k)/(gcd(a[i],k)));
}
cout<<k;
return 0;
}
 
