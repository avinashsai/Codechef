#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
using namespace std;
bool prime(long long int n)
{
for(int i=2;i*i<=n;i++)
if(n%i==0)
return 0;
return 1;
}
int main()
{
long long int no,n,i,min;
cin>>no;
while(no--)
{
cin>>n;
min=INT_MAX;
if(!prime(n))
{
for(i=2;i*i<=n;i++)
{
if(n%i==0)
{
if(abs(n/i-i)<min)
min=abs(n/i-i);
}}
cout<<min<<"\n";}
else
cout<<n-1<<"\n";}
return 0;
}
