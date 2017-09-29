#include<iostream>
using namespace std;
int main()
{
string a;
long int sum,no,n,i;
cin>>no;
while(no--)
{
cin>>a;
n=a.length();
sum=2;
for(i=1;i<n;i++)
{
if(a[i]>a[i-1])
{
sum=sum+(a[i]-a[i-1])+1;}
else if(a[i]<a[i-1]){
sum=sum+(122-a[i-1])+(a[i]-97);
sum+=2;
}
else
sum=sum+1;
}
if(11*n>=sum)
cout<<"YES\n";
else
cout<<"NO\n";
}
return 0;
}
