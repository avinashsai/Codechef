#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int no,n,a[1000],i,c;
cin>>no;
while(no--)
{
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
c=0;
for(i=1;i<n;i++)
c+=a[i]-a[0];
cout<<c<<"\n";
}
return 0;
}

