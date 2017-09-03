#include<iostream>
#define ll long long int 
using namespace std;
int main()
{
ll no,n,a,b,k;
cin>>no;
while(no--)
{
cin>>a>>b>>k;
if(a%k==0)
n=1;
else
n=0;
cout<<n+(b/k)-(a/k)<<endl;
}
return 0;
}
