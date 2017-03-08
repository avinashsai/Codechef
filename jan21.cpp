#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 void swap(long int *a,long  int *b)
{
	long long int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(long  int b[],long int e[],long  int l,long  int h)
{
	long long int x=b[h],i=l-1,j;
	for(j=l;j<h;j++)
	{
		if(b[j]<=x)
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
void sort(long int b[],long int e[],long int l,long int h)
{
	if(l<h)
	{
		int p=partition(b,e,l,h);
		sort(b,e,l,p-1);
		sort(b,e,p+1,h);
	}
}
// A structure to represent an adjacency list node
struct AdjListNode
{
    int dest;
    struct AdjListNode* next;
};
 
// A structure to represent an adjacency list
struct AdjList
{
    struct AdjListNode *head;  // pointer to head node of list
};
 
// A structure to represent a graph. A graph is an array of adjacency lists.
// Size of array will be V (number of vertices in graph)
struct Graph
{
    int V;
    struct AdjList* array;
};
 
// A utility function to create a new adjacency list node
struct AdjListNode* newAdjListNode(int dest)
{
    struct AdjListNode* newNode =
            (struct AdjListNode*) malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}
 
// A utility function that creates a graph of V vertices
struct Graph* createGraph(int V)
{
    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph->V = V;
 
    // Create an array of adjacency lists.  Size of array will be V
    graph->array = (struct AdjList*) malloc(V * sizeof(struct AdjList));
 
     // Initialize each adjacency list as empty by making head as NULL
    int i;
    for (i = 0; i < V; ++i)
        graph->array[i].head = NULL;
 
    return graph;
}
 
// Adds an edge to an undirected graph
void addEdge(struct Graph* graph, int src, int dest)
{
    // Add an edge from src to dest.  A new node is added to the adjacency
    // list of src.  The node is added at the begining
    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
 
    // Since graph is undirected, add an edge from dest to src also
    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}
int main()
{
	long int no,i,j,max,n,ind,x,y,b[50000];
	long int e[50000];
	bool visited[50000];
	scanf("%ld",&no);
	while(no--)
	{
		scanf("%ld",&n);
		for(i=1;i<=n;i++)
		{
		scanf("%ld",&b[i]);
		e[i]=i;
	}
		sort(b,e,1,n);
	struct Graph* graph = createGraph(n);
	for(i=1;i<n;i++)
	{
		scanf("%ld %ld",&x,&y);
		addEdge(graph,x-1,y-1);
	}
		for(i=0;i<graph->V;i++)
		{
			struct AdjListNode* pCrawl = graph->array[i].head;
			long int ind_min=1,ind_max=n;
			while (pCrawl)
        {
            if((pCrawl->dest)+1==e[ind_min])
			ind_min++;
			if(((pCrawl->dest)+1)==e[ind_max])
			ind_max--;
			if(e[ind_max]==i+1)
			ind_max--;
			if(e[ind_min]==i+1)
			ind_min++;
            pCrawl = pCrawl->next;
        }
        if(ind_max<ind_min)
        printf("0 ");
        else
        {
        	if(e[ind_max]!=i+1)
        printf("%ld ",e[ind_max]);
        else if(ind_max>ind_min)
        {
        	if(e[ind_max]!=i+1)
        printf("%ld ",e[ind_max]);
        else
        printf("%ld ",e[ind_max-1]);
    }
        else if(ind_max==ind_min)
        {
        	if(e[ind_max]!=i+1)
        printf("%ld ",e[ind_max]);
        else
        printf("0 ");}
        }
	}
	printf("\n");
	}
	return 0;
}
