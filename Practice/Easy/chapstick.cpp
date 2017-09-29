#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long long int a[100000],n,i,k,j;
cin>>n>>k;
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
i=0;
for(j=n-1;j>i;)
{
if(a[j]-k>a[i])
j--;
if(a[i]+k
