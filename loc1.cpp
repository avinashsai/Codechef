#include<iostream>
#include<string.h>
#define ll long long int
using namespace std;
int main()
{
string a;
bool flag;
ll no,n,i;
cin>>no;
while(no--)
{
cin>>a;
flag=0;
n=a.length();
for(i=2;i<n;i++)
{
if(a[i]==a[i-2]||a[i]==a[i-1])
{
flag=1;
break;
}}
if(a[0]==a[1])
flag=1;
if(flag)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}

