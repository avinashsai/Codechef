/*author:Avinash
college:Nit Trichy
*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
#define ll long long int
using namespace std;
int main()
{
    ll no,n,d,i,c,s1,k,j,s,p,def;
    ll a[100000];
    cin>>no;
    while(no--)
    {
        cin>>n>>d;
        s1=0,c=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            s1=s1+a[i];
        }
        if(s1%n!=0)
            cout<<"-1"<<endl;
        else
        {
            k=s1/n;
            bool f=0;
        for(i=0;i<d;i++)
        {
            s=0,p=0;
            for(j=i;j<n;j=j+d)
                s=s+a[j],p++;
            if(s%p!=0||(s%p==0&&s/p!=k))
            {
                f=1;break;
            }
            def=0;
            for(j=i;j<n;j=j+d)
            {
                if(a[j]+def==k)
                    def=0;
                else 
                {
                    def=def+(a[j]-k);
                    c=c+abs(def);
                }
            }
        }
        if(f)
            cout<<"-1"<<endl;
           else
            cout<<c<<endl;
        }
    }
    return 0;
}  