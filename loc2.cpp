#include <iostream>
#include <stdio.h>
#include <math.h>
#define ll long long int
#define s 1000000007
using namespace std;
ll getMid(ll f, ll e) {  return f + (e -f)/2;  }
 

ll getSumUtil(ll *st, ll ss, ll se, ll qs, ll qe, ll si,ll x)
{
   
    if ((si)%x==0)
        return ((st[si])*(st[si]));
 
   
    if (se < qs || ss > qe)
        return 0;
 
    
    ll mid = getMid(ss, se);
    return (getSumUtil(st, ss, mid, qs, qe, 2*si+1,x)+
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2,x));
}
 
void updateValueUtil(ll *st, ll ss, ll se, ll i, ll diff, ll si)
{
    
    if (i < ss || i > se)
        return;
 
   
    st[si] = st[si] + diff;
    if (se != ss)
    {
        ll mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
 

void updateValue(ll arr[], ll *st, ll n, ll i, ll new_val)
{
       
    ll diff = new_val - arr[i];
 
    
    arr[i] = new_val;
 
    
    updateValueUtil(st, 0, n-1, i, diff, 0);
}

ll getSum(ll *st, ll n, ll qs, ll qe,ll x)
{
    return getSumUtil(st, 0, n-1, qs, qe, qs,x);
}
 

ll constructSTUtil(ll arr[], ll ss, ll se, ll *st, ll si)
{
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    
    ll mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}
 

ll *constructST(ll arr[], ll n)
{
    
    ll x = (ll)(ceil(log2(n))); 
 
    
    ll max_size = 2*(ll)pow(2, x) - 1; 
 
   
    ll *st = new ll[max_size];
 
   
    constructSTUtil(arr, 0, n-1, st, 0);
 
   
    return st;
}
 

int main()
{
	ll no,n,arr[100000],q,type,l,r,i,x;
	cin>>no;
    while(no--)
    {
    	cin>>n>>q;
    	for(i=0;i<n;i++)
    		cin>>arr[i];
    	 ll *st = constructST(arr, n);
 
    	while(q--) 
    	{
           cin>>type>>l;
          if(type==1)
            cout<<getSum(st, n, 1, n,x)<<endl;
          if(type==2)
         {
         	cin>>l>>r;
    updateValue(arr, st, n, l,r);
}
}
}
    return 0;
}