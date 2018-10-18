#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int final(ll a,ll b)
{
	if(b==0)
		return a;
	else
		return final(b,a%b);
}
int gcd(ll num,string s)
{
	int n=s.length(),i;
    ll cur=0,rem;
    for(i=0;i<n;i++)
       	cur = (cur*10+(s[i]-'0'))%num;
    return final(num,cur);
}
int main()
{
string s1;
long int no,i,num;
cin>>no;
while(no--)
{
cin>>num>>s1;
if(num!=0)
	cout<<gcd(num,s1)<<endl;
else
	cout<<s1<<endl;
}
return 0;
}
