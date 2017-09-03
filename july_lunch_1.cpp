#include<iostream>
#include<string.h>
#include<stdio.h>
#define ll long long int
using namespace std;
int main()
{
	ll a[100],i,n,no;
	char temp;
	cin>>no;
	while(no--)
	{
        i=0;
        do{
        scanf("%lld %c", &a[i], &temp); 
        i++; 
        } while(temp!= '\n');
        for(ll j=0;j<i;j++)
        	cout<<a[j]<<" ";
        cout<<endl;
	}
	return 0;
}