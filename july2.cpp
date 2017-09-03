#include<iostream>
using namespace std;
int main()
{
long long int no,u,v,k;
cin>>no;
while(no--)
{
cin>>u>>v;
k=u+v;
cout<<u+1+((k*(k+1))/2)<<"\n";
}
return 0;
}
