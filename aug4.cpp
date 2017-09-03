#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
bool same(string s,int n)
{
for(int i=0;i<n-1;i++)
if(s[i]!=s[i+1])
return 0;
return 1;
}
bool zero_one(int a[],int b[])
{
for(int i=0;i<26;i++)
if(a[i]>=1&&b[i]==0)
return 1;
return 0;
}
bool exist(int a[],int b[])
{
for(int i=0;i<26;i++)
if(!a[i]&&b[i])
return 0;
return 1;
}
int main()
{
string s,p;
int no,n,i,j;
cin>>no;
while(no--)
{
cin>>s>>p;
n=s.length();
int a[26]={0},b[26]={0};
memset(a,0,26);
memset(b,0,26);
if(same(s,n)&&same(p,n))
{
if(s[0]!=p[0]&&n>1)
cout<<"A"<<endl;
else
cout<<"B"<<endl;
}
else
{
for(i=0;i<n;i++)
{
++a[s[i]-'a'];
++b[p[i]-'a'];
}
bool f=0;
for(i=0;i<26;i++)
{
if(a[i]>1&&!b[i])
{f=1;break;}
}
if(f)
cout<<"A"<<endl;
else
{
if(zero_one(a,b)&&exist(a,b))
cout<<"A"<<endl;
else
cout<<"B"<<endl;
}
}
}
return 0;
}