#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
long long int a[100],i,n,k,s1,s2,no,s3,s4,s5;
cin>>no;
while(no--)
{
cin>>n>>k;
s1=0,s2=0,s3=0;
for(i=0;i<n;i++)
{
cin>>a[i];
s1+=a[i];
}
sort(a,a+n);
for(i=0;i<k;i++)
s2+=a[i];
for(i=n-1;i>=n-k;i--)
s3+=a[i];
s4=s1-s2;
s5=s1-s3;
if(abs(s4-s2)>=abs(s5-s3))
cout<<abs(s4-s2)<<"\n";
else
cout<<abs(s5-s3)<<"\n";
}
return 0;
}
