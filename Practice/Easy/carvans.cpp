#include<iostream>
#include<vector>
using namespace std;
int main()
{
long int a[100000],max;
long int no,c,i,n;
cin>>no;
while(no--)
{
cin>>n;
c=1;
if(n==1)
{
cin>>a[0];
cout<<"1\n";
}
else
{
for(i=0;i<n;i++)
cin>>a[i];
max=a[0];
for(i=1;i<n;i++)
{
if(a[i]<=max)
{
c++;
max=a[i];
}}
cout<<c<<"\n";
}
}
return 0;
}
