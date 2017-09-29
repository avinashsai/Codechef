#include<iostream>
using namespace std;
int gcd(long int a,long int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
int main()
{
string s1;
long int n,no,i,num;
cin>>no;
while(no--)
{
cin>>n>>s1;
if(n!=0)
{
num=0;
for(i=0;i<s1.length();i++)
{
num=num*10+(s1[i]-'0');
num=num%n;
}
cout<<gcd(n,num)<<"\n";}
}
return 0;
}
