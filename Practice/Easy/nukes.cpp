#include<iostream>
using namespace std;
int main()
{
long long int n,k,a,i;
cin>>a>>n>>k;
for(i=1;i<=k;i++)
{
cout<<(a%(n+1))<<" ";
a=a/(n+1);
}
return 0;
}

