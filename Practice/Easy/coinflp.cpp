#include<iostream>
using namespace std;
int main()
{
long long int g,no,q,r,i,h,t;
cin>>no;
while(no--)
{
cin>>g;
while(g--)
{
cin>>i>>r>>q;
if(i==1)
{
h=r/2;
t=r-h;
}
else if(i==2)
{
t=r/2;
h=r-t;}
if(q==1)
cout<<h<<"\n";
else
cout<<t<<"\n";}
}
return 0;
}
