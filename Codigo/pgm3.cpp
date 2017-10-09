#include<iostream>
#define ll long long int
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main()
{
	ll n,k,i,a[50000],b[50000],c[50000];
	cin>>k>>n;
    for(i=0;i<k;i++)
    cin>>a[i]>>b[i];
    sort(a,a+k);
    sort(b,b+k);
    ll j=0;
     while(n--)
     {
     	cin>>i;
     	c[j++]=(upper_bound(a,a+k,i)-a)-(lower_bound(b,b+k,i)-b);
    }
    for(i=0;i<j;i++)
        cout<<c[i]<<" ";
    return 0;
}

