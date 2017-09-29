#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
long long int a[100000],n,k,i,c=0;
cin>>n>>k;
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
for(i=0;i<n-1;){
if(a[i+1]-a[i]<=k){
c++;i=i+2;}
else
i++;
}
cout<<c;
return 0;
}
