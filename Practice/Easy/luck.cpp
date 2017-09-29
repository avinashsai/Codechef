#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s;
long int no,n,i,d;
cin>>no;
while(no--)
{
cin>>s;
n=s.length();
d=0;
for(i=0;i<n;i++)
{
if(s[i]!='4'&&s[i]!='7')
d++;
}
cout<<d<<"\n";
}
return 0;
}

