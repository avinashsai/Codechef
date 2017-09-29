#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string a;
long int no,n,i,j,c,p;
cin>>no;
while(no--)
{
cin>>a;
n=a.length();
c=0;i=0,j=0,p=0;
while(i<n)
{
if(a[i]=='.')
{
p=i;
while(a[p]=='.')
p++;
if(p-i>j)
{j=p-i;c++;}
i=p;
}
else
i++;
}
cout<<c<<"\n";
}
return 0;
} 
