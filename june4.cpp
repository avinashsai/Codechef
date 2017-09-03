#include<iostream>
#include<algorithm>
#define ll long long int 
#define s 1000000007
using namespace std;
int main()
{
ll a[100000],b[100000],c[100000];
ll no,n,m,k,i,j,p,s2,s3,s1,s4,q;
cin>>no;
while(no--)
{
cin>>n>>m>>k;s1=0,s3=0;
for(i=0;i<n;i++){
cin>>a[i];
s1+=a[i];}
for(i=0;i<m;i++)
cin>>b[i];
for(i=0;i<k;i++){
cin>>c[i];
s3+=c[i];
}
s4=0;
sort(a,a+n);
sort(b,b+m);
sort(c,c+k);
for(j=0;j<m;j++)
{
for(i=0;i<n;i++)
{
if(a[i]>b[j])
s1=s1-a[i];
else
break;
}
p=n-i;
for(i=0;i<k;i++)
{
if(c[i]>b[j])
s3=s3-c[i];
else
break;
}
q=k-i;
s2=(((q*b[j])%s*(s1%s))%s+((s1%s)*(s3%s))%s+((p*b[j])%s*(s3%s))%s+((q*p)%s *((b[j]*b[j])%s))%s)%s;
s4+=s2;
}
cout<<s4%s<<"\n";
}
return 0;
}
