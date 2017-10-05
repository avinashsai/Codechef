#include<iostream>
#include<list>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<vector>
#define ll long long int
using namespace std;
ll a[1000000];
class graph
{
public:
ll v;
graph(ll v);
list<ll> *adj;
void dfs(ll u,ll sum,bool visited[]);
void addedge(ll u,ll w);
};
graph::graph(ll v)
{
	this->v=v;
	adj=new list<ll>[v];
}
void graph::addedge(ll u,ll w)
{
	adj[u].push_back(w);
	//adj[w].push_back(u);
}
void graph::dfs(ll u,ll sum,bool visited[])
{
	list<ll>::iterator i;
	visited[u]=1;
	for(i=adj[u].begin();i!=adj[u].end();i++){
		{
			list<ll>::iterator j;
				a[*i]+=sum;
			for(j=adj[*i].begin();j!=adj[*i].end();j++){
				if(!visited[*j])
					a[*j]+=sum,visited[*j]=1;
		}
	}
}
}
int main()
{
	ll no,n,u,w,t,i;
	scanf("%lld %lld",&n,&no);
	graph g(n);
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
    for(i=0;i<n-1;i++)
    {
    	scanf("%lld %lld",&u,&w);
    	u=u-1,w=w-1;
    	g.addedge(u,w);
    }
    while(no--)
    {
    	scanf("%lld",&t);
    	if(t==1)
    	{
    		scanf("%lld",&u);
    		printf("%lld\n",a[u-1]);
    	}
    	else
    	{
    		bool visited[100000];
    		memset(visited,0,100000);
    		scanf("%lld %lld",&u,&w);
    		g.dfs(u-1,w,visited);
    	}
    }
    return 0;
}
 