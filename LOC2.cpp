#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
long long int no,k,n,i,j,sum;
cin>>no;
while(no--)
{
cin>>n>>k;
vector<long long int> a(n);
for(i=0;i<n;i++)
cin>>a[i];
sort(a.begin(),a.end());
sum=0;
bool f=0;
for(i=0;i<n;i++)
{
sum+=a[i];
j=i+1;
while(a[i]==a[j]&&j<n)
j++;
if(j<n)
{
if(sum+(n-j)*a[i]==k)
{
f=1;
cout<<a[i]<<endl;
break;
}
}
else
{
if(sum==k)
{
f=1;
cout<<a[i]<<endl;
break;
}
}
}
if(!f)
cout<<"-1"<<endl;
}
return 0;
}
