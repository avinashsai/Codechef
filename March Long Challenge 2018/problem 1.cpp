#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long int
using namespace std;
int main()
{
   ll n,i,no,l;
   scanf("%lld",&no);
   while(no--)
   {
   	scanf("%lld",&n);
   	vector<ll>a(n);
    vector<ll>b(n);
    for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
}
 for(i=0;i<n;i++){
    scanf("%lld",&b[i]);
}
bool flag1=0,flag2=0;
for(i=0;i<n;i++)
{
	if(a[i]>b[i])
	flag1=1;
	if(a[i]>b[n-i-1])
	flag2=1;
}
if(!flag1&&!flag2)
cout<<"both"<<endl;
else if(!flag1&&flag2)
cout<<"front"<<endl;
else if(flag1&&!flag2)
cout<<"back"<<endl;
else
cout<<"none"<<endl;
   }
   return 0;	
}
