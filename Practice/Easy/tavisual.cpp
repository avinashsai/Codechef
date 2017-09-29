#include<iostream>
using namespace std;
int main()
{
long int no,n,c,q,l,r;
cin>>no;
while(no--)
{
cin>>n>>c>>q;
while(q--)
{
cin>>l>>r;
if(c<=r&&c>=l)
c=r-(c-l);
}
cout<<c<<"\n";
}
return 0;
}

