#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s1,s2;
long int no,n,m,i,j;
cin>>no;
while(no--)
{
cin>>s1>>s2;
n=s1.length();
m=s2.length();
if(n<=m)
{
j=0;
for(i=0;i<m;i++)
{
if(s2[i]==s1[j])
j++;}
if(j==n)
cout<<"YES\n";
else
cout<<"NO\n";}
else
{
j=0;
for(i=0;i<n;i++)
{
if(s1[i]==s2[j])
j++;}
if(j==m)
cout<<"YES\n";
else
cout<<"NO\n";
}
}
return 0;
}
