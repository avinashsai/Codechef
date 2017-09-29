#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
string s1,s2;
long int no,i,p,j;
cin>>no;
while(no--)
{
cin>>s1>>s2;
p=0;
for(i=0;i<s2.length();i++)
{
for(j=0;j<s1.length();j++)
{
if(s1[j]==s2[i]){
p++;break;}}}
cout<<p<<"\n";
}
return 0;
}
