#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
if(b==0)
return a;
else
return a%b;
}
int main()
{
int a[4],i;
for(i=0;i<4;i++)
cin>>a[i];
sort(a,a+4);
if(a[1]%a[0]==0&&a[3]%a[2]==0)
{
int k=gcd(a[1],a[0]);
int l=gcd(a[3],a[2]);
if((a[1]/k)==(a[3]/l)&&(a[0]/k)==(a[2]/l))
{
cout<<"Possible";return 0;
}
}
if(a[2]%a[0]==0&&a[3]%a[1]==0)
{
int k=gcd(a[2],a[0]);
int l=gcd(a[3],a[1]);
if((a[2]/k)==(a[3]/l)&&(a[0]/k)==(a[1]/l))
{
cout<<"Possible";return 0;
}
}
if(a[3]%a[0]==0&&a[3]%a[2]==0)
{
int k=gcd(a[3],a[0]);
int l=gcd(a[2],a[1]);
if((a[3]/k)==(a[2]/l)&&(a[0]/k)==(a[1]/l))
{
cout<<"Possible";return 0;
}
}
else
cout<<"Impossible";
return 0;
}

