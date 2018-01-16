#include <stdio.h>
#include <stdlib.h>
#define N 20

//dfs with adjecency matrix example.

int G[N][N],visited[N],n,m;

void dfs(int v)
{
	int i,u;
	printf("%d\n",v);
	visited[v] = 1;

	for ( u = 0; u < n; u++) 
		if ((!visited[u]) && (G[u][v] == 1)) 
			dfs(u);
}

int main(void)
{
	int v1,v2,i;
	
	printf("Enter number of vertices\n");
	scanf("%d",&n);
	printf("Enter number of edges\n");
	scanf("%d",&m);

	for ( i = 0; i < m; i++) {
		printf("Enter edge's start and end point\n");
		scanf("%d %d",&v1,&v2);
		G[v1][v2] = G[v2][v1] = 1;
	}

	printf("dfs\n");

	dfs(0);

	return (0);
}
