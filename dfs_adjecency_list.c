#include <stdio.h>
#include <stdlib.h>

#define N 20

// dfs adjecency list example.

typedef struct node
{
	struct node *next;
	int vertex;
}node;


node *G[N];
// heads of linked list.


int visited[N];
int n;

void dfs(int i)
{
	node *p;
	
	printf("%d\n",i);
	
	p = G[i];
	visited[i] = 1;
	
	while ( p != NULL ) {
		i = p->vertex;
		
		if( !visited[i] )
			dfs(i);

		p = p->next;
	}
}

void insert(int i,int vi)
{
	node *q, *p;
	
	q = (node *)malloc(sizeof(node));
	q->vertex = vi;
	q->next = NULL;

	if(G[i] == NULL) 
		G[i] = q;
	else {
		p = G[i];

		while (p->next != NULL)
			p = p->next;
		p->next = q;
	}
}

void read_graph()
{
	int i, j, vi, no_edges;
	printf("Enter number of vertices: \n");
	
	scanf("%d",&n);
	
	for ( i = 0; i < n; i++) {
		G[i] = NULL;
		
		printf("Enter number of edges for node %d: \n",i);
		scanf("%d",&no_edges);

		for ( j = 0; j < no_edges; j++) {
			printf("Enter neighbour:\n");
			scanf("%d",&vi);
			insert(i,vi);
		}
	}
}
int main(void)
{
	read_graph();
	
	dfs(0);

	return (0);
}
