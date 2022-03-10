#include<stdio.h>
#include<stdlib.h>

int graph[20][20],visited[20],i,j,n,start,a[20];
static int k=1,count=0;
void DFS(int);

void main()
{
	printf("\nEnter number of vertices");
	scanf("%d",&n);
	printf("\nEnter the adjacency matrix");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	
	for(i=1;i<=n;i++)
		visited[i]=0;
	
	printf("\nEnter the starting vertex:");
	scanf("%d",&start);
	
	DFS(start);

}

void DFS(int vertex)
{
	int j,c=0;
	count++;
	printf("%d\t",vertex);
	visited[vertex]=1;
	for(j=1;j<=n;j++)
	{
		if(!visited[j] && graph[vertex][j] == 1)
		{
			a[++k]=j;
			c=1;
		}
		if(count==n)
			exit(1);
	}
	if(c==1)
		DFS(a[k]);
	else
	{
		k--;
		DFS(a[k]);
	}
	
}	
