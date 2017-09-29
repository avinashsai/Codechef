#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long long int no,a[100000],p,q,n,i,c;
cin>>no;
while(no--)
{
cin>>n>>p>>q;
for(i=0;i<n;i++)
cin>>a[i];
c=0;
sort(a,a+n);
for(i=0;i<n;i++){
if(p*1+q*2>a[i])
{
if(a[i]%2==0)
{
if(q*2>=a[i])
{
q=q-a[i]/2;c++;}
else if(p-(a[i]-q*2)>=0)
{
p=p-(a[i]-q*2);
q=0;c++;}
}
else
{
if(q*2>=a[i]&&(p-(q*2-a[i]))>=0)
{
q=q-a[i]/2;
p=p-(q*2-a[i]);c++;}
else if(p-(a[i]-q*2)>=0&&a[i]>q*2)
{
a[i]=a[i]-q*2;
q=0;
p=p-a[i];c++;}}}
else if(p*1+q*2==a[i])
{
c++;break;}
else
break;}
cout<<c<<"\n";
}
return 0;
}

