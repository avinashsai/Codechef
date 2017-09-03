#include<iostream>
#include<algorithm>
#include<string.h>
#define ll long long int
using namespace std;
ll search(ll a[],ll high,ll val,ll low)
{
	ll l=low,h=high;
	for(ll i=l;i<h;i++)
		if(a[i]>=val)
			return i;
	return -1;
}
int main()
{
	ll a[300000],no,n,i,j,k,c;
	bool v[300000];
	cin>>no;
	while(no--)
	{
		cin>>n>>k>>c;
		memset(v,0,sizeof(v));
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		ll count=0;
		for(i=0;i<n;i++)
		{
			if(v[i])
				continue;
			else{
              for(j=i;j<n;)
              {
              	ll ind=search(a,n,a[j]*c+1,j);
              	if(ind>0&&v[ind]==0){
              		j=ind;
                     v[j]=1;
              	}
              	else{
              		count++;
              		break;
              	}
              }
			}
		}
		cout<<count<<endl;
	}
	return 0;
}