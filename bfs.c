#include<stdio.h>
#include<stdlib.h>

void BFS(int);
int graph[10][10],visited[10],total,start,n;

void main()
{
	
	int i,j;
	printf("\nEnter no of vertices");
	scanf("%d",&n);
	printf("\nEnter Adjacency Matrix");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	for(i=1;i<=n;i++)
		visited[i]=0;
	printf("Enter starting vertex");
	scanf("%d",&start);
	BFS(start);
}

void BFS(int vertex)
{
	int j;
	printf("%d\t",vertex);
	visited[vertex]=1;
	for(j=1;j<=n;j++)
	{
		if(!visited[j] && graph[vertex][j])
		{
			BFS(j);
		}
	}
}
	
	
