#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
int main()
{
	ll a[100000],n,q,t,i,l,r,x,pre,pre_h;
	cin>>n>>q;
	for(i=1;i<=n;i++)
		cin>>a[i];
	while(q--)
	{
		cin>>t;
		if(t==1)
		{
			cin>>l>>r;
			pre=l,pre_h=a[l];
            for(i=l+1;i<=n&&r>0;i++)
            {
            	if((a[i]-pre_h)>0&&(i-pre)<=100)
                {
                   pre=i;
                   pre_h=a[i];
                   r--;
                }
                else if(a[i]<=pre_h)
                	continue;
              
            }
            cout<<pre<<endl;
		}
		if(t==2)
		{
			cin>>l>>r>>x;
			for(i=l;i<=r;i++)
				a[i]=a[i]+x;
		}
	}
	return 0;
}