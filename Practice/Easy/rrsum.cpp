#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int min(long int a,long int b)
{
return a<=b?a:b;
}
int main()
{
long long int n,q,i;
cin>>n>>q;
while(q--)
{
cin>>i;
if(i<=n||i>3*n)
cout<<"0\n";
else
cout<<min(i-(n+1),3*n-i+1)<<"\n";
}
return 0;
}


