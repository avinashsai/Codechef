#include<iostream>
#include<string.h>
using namespace std;
bool prime(long long int n)
{
if(n==1)
return 0;
if(n==2||n==3)
return 1;
else
{
for(int i=2;i*i<=n;i++)
if(n%i==0)
return 0;

return 1;
}}
int main()
{
string s;
long long int n,i,co=0;
char c;
cin>>s>>c;
for(i=0;i<s.length();i++)
{
if(s[i]==c)
co++;
}
if(prime(co))
{
if(co&1)
cout<<"oddprime";
else
cout<<"evenprime";
}
else
cout<<"notprime";
return 0;
}
