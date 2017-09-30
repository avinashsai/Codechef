#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]>='a'&&s[i]<='z')
			printf("%c",s[i]-32);
		else
			printf("%c",s[i]+32);
	}
		return 0;
}