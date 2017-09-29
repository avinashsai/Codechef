#include<iostream>
#include<string.h>
#define ll long int
using namespace std;
bool check(int b[],char a[100][100],int m,char c,char d)
{
	int i,j,p=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<b[i];j++){
			if(a[i][j]==c||a[i][j]==d)
				p++;
		}
		if(p==1)
			return 0;
	}
	if(p==2)
		return 1;
	return 0;
}
int main()
{
	ll no,n,m,i,k,mid,j;
	char a[100][100];
	int b[100];
	string s;
    cin>>no;
    while(no--)
    {
     cin>>n>>m>>s;
     mid=n/2-1;
     for(i=0;i<m;i++)
     {
     	cin>>b[i];
     	for(j=0;j<b[i];j++)
     		cin>>a[i][j];
     }
     bool f=0;
     for(i=0;i<=mid;i++)
     {
     	if(s[i]!=s[n-i-1])
     	{
     		if(!check(b,a,m,s[i],s[n-i-1])){
     			f=1;break;
     		}
     	}
     }
     if(f)
     	cout<<"Not Impersonating"<<endl;
     else
     	cout<<"Impersonating"<<endl;
    }
    return 0;
}