#include<iostream>
using namespace std;
struct name
{
int len;
int b[250];
};
bool count(name c,name d,int k)
{
int l1=c.len,l2=d.len;
int i=0,j=0,m=0;
while(i<l1&&j<l2)
{
if(c.b[i]<d.b[j])
{
m++;
i++;
}
else if(c.b[i]>d.b[j])
{
m++;
j++;
}
else
{
m++;
i++;j++;
}
}
while(i<l1)
{
m++;
i++;
}
while(j<l2)
{
m++;j++;
}
if(m==k)
return 1;
return 0;
}
int main()
{
name a[250];
int no,n,k,l,i;
cin>>no;
while(no--)
{
cin>>n>>k;
for(i=0;i<n;i++)
{
cin>>a[i].len;
for(int j=0;j<a[i].len;j++)
cin>>a[i].b[j];
}
/*for(i=0;i<n;i++)
{
 l=a[i].len;
sort(a[i].b,a[i].b+l);
}*/	
l=0;
for(i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
if(count(a[i],a[j],k))
l++;
}
cout<<l<<"\n";
}
return 0;
}
