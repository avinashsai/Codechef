#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s;
long long int no,n,i,c;
cin>>no;
while(no--)
{
cin>>n>>s;
c=0;
for(i=0;i<n;i++){
if(s[i]=='1')
c++;}
cout<<(c*(c+1))/2<<"\n";
}
return 0;
}
