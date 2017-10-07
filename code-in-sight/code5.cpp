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
	a[u]+=sum;
	for(i=adj[u].begin();i!=adj[u].end();i++){
		if(!visited[*i])
		dfs(*i,sum,visited);
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
    		bool visited[100000];
    		memset(visited,0,100000);
    		scanf("%lld %lld",&u,&w,&sum);
    		g.dfs(u-1,w,visited,sum);
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}