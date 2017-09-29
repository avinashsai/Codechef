#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string x,y;
long long int a[26]={0},b[26]={0},i,n,m;
cin>>x>>y;
n=x.length();
m=y.length();
if(n!=m)
cout<<"Not Anagram";
else
{
for(i=0;i<n;i++)
++a[x[i]-97];
for(i=0;i<m;i++)
++b[y[i]-97];
for(i=0;i<26;i++)
{
if(a[i]!=b[i])
{
cout<<"Not Anagram";
return 0;
}
}
cout<<"Y is Anagram of X";
}
return 0;
}
