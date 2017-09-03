#include<iostream>
#define ll long long int 
using namespace std;
int main()
{
ll no,n;
cin>>no;
while(no--)
{
cin>>n;
if((n&(n-1))==0||(n%4==1)||(n%24)==1)
cout<<"a"<<endl;
else if(n%4==3||(n%24==0))
cout<<"c"<<endl;
else
{
if(((n-2)/4)%2==1)
cout<<"c"<<endl;
else if(((n-2)/4)%2==0)
cout<<"a"<<endl;
}
}
return 0;
}

