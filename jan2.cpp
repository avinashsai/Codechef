#include<iostream>
using namespace std;
void swap(long long int *a,long long int *b)
{
	long long int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(long long int b[],long long int e[],long long int l,long long int h)
{
	long long int x=b[h],i=l-1,j;
	for(j=l;j<h;j++)
	{
		if(b[j]>=x)
		{
			i++;
			swap(&b[i],&b[j]);
			swap(&e[i],&e[j]);
		}
	}
	swap(&b[i+1],&b[h]);
	swap(&e[i+1],&e[h]);
	return i+1;
}
void sort(long long int b[],long long int e[],long long int l,long long int h)
{
	if(l<h)
	{
		int p=partition(b,e,l,h);
		sort(b,e,l,p-1);
		sort(b,e,p+1,h);
	}
}
int main()
{
	long long int b[50000],no,n,x,y,max,ind,i,j,k;
	long long int c[50000],d[50000],e[50000];
	bool visited[50000]={0};
	cin>>no;
	while(no--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
		cin>>b[i];
		e[i]=i;
	}
	sort(b,e,1,n);
		for(i=1;i<n;i++)
		{
			cin>>x>>y;
			c[i]=x,d[i]=y;
		}
		for(i=1;i<=n;i++)
		{
			ind=0;
			k=1;
			for(j=1;j<=n;j++)
			{
				if(c[j]==e[k]||d[j]==e[k])
				k++;
			}
			if(k>n)
			cout<<"0"<<" ";
			else
			cout<<e[k]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
