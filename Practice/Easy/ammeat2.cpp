#include<bits/stdc++.h>
using namespace std;
/*
int a[778];
vector<int>prime;
//vector<int>nums;
void seive()
{
   int i,j;
   for(i=0;i<778;i++)
   	a[i]=0;
   a[1]=1;
   for(i=2;i*i<778;i++)
   {
   	if(!a[i])
   	{
   		for(j=2*i;j<778;j=j+i)
   			a[j]=1;
   	}
   }
   for(i=2;i<778;i++)
   {
   	if(!a[i])
   		prime.push_back(i);
   }
}*/
int main()
{
	int no,n,k,i;
	//seive();
	cin>>no;
	while(no--)
	{
		cin>>n>>k;
		if(k==1){
			cout<<"1"<<endl;
			continue;
		}
		if(2*k>n)
			cout<<"-1"<<endl;
		else
		{
			for(i=1;i<=k;i++)
				cout<<2*i<<" ";
			cout<<endl;
		}
	}
	return 0;
}