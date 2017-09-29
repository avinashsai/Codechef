#include<iostream>
#define ll long long int
using namespace std;
ll gcd(ll a,ll b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	ll s,x,y,t,no,g,a,c,b;
	cin>>no;
	while(no--)
	{
		cin>>s>>x>>y>>t;
        g=gcd((s*y),(x*t));
        g=gcd(g,(x*y));
        a=((s*y)/g);
        c=((x*t)/g);
        b=((x*y)/g);
        cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}