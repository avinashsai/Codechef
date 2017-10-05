#include<iostream>
#include<list>
#include<string.h>
#include<stdlib.h>
#include<vector>
#define ll long long int
using namespace std;
class graph
{
public:
 int v;
 list<int> *adj;
 void dfsutil(int u,bool visited[]);
	graph(int v);
	void addedge(int u,int w);
	void dfs();
};
graph::graph(int v)
{
	this->v=v;
	adj=new list<int>[v];
}
void graph::addedge(int u,int w)
{
	adj[u].push_back(w);
	adj[w].push_back(u);
}
void graph::dfsutil(int u,bool visited[])
{
	visited[u]=1;
	list<int>::iterator i;
	for(i=adj[u].begin();i!=adj[u].end();i++)
	{
		if(!visited[*i])
			dfsutil(*i,visited);
	}
}
void graph::dfs()
{
	bool visited[v];
	int c=0;
	for(int i=0;i<v;i++)
		visited[i]=0;
	for(int i=0;i<v;i++)
	{
		if(!visited[i])
		{
			c++;
			dfsutil(i,visited);
		}
	}
	cout<<c<<endl;
}
int main()
{
	int no,n,i,u,v,t;
	cin>>no;
	while(no--)
	{
		cin>>n;
		graph g(n);
		cin>>t;
		while(t--)
		{
			cin>>u>>v;
			g.addedge(u,v);
		}
		g.dfs();
	}
	return 0;
}