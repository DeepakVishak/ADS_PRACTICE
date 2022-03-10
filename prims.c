#include<stdio.h>
#include<stdlib.h>

int n,cost[10][10],visited[10]={0};
int a,b,i,j,u,v,ne=1,min,mincost;

void main()
{
	printf("\nImplementation of prims algorithm");
	printf("\nEnter number of vertices");
	scanf("%d",&n);
	
	printf("\nEnter adjancency matrix");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	visited[1]=1;
	printf("\n");
	
	while(ne<n)
	{
		for(i=1,min=999;i<=n;i++)
			for(j=1;j<=n;j++)
				if(cost[i][j]<min)
				if(visited[i]!=0)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
		if(visited[u]==0 || visited[v]==0)
		{
			printf("\n %d Edge(%d,%d) cost:%d",ne++,a,b,min);
			mincost+=min;
			visited[b]=1;
		}
		cost[b][a]=cost[a][b]=999;
	}
	printf("\nMin cost : %d",mincost);
			 
		
}	
