#include<stdio.h>
#include<stdlib.h>

int n,cost[10][10],parent[10];
int a,b,u,v,i,j,ne=1,min,mincost;

int find(int x)
{
	while(parent[x])
		x=parent[x];
		
	return x;
}

int Union(int x,int y)
{
	if(x!=y)
	{
		parent[y]=x;
		return 1;
	}
	return 0;
}

void main()
{
	printf("\n Implementation of Kruskals algorithm");
	printf("\n Enter no of vertices");
	scanf("%d",&n);
	printf("\n Enter the adjancency matrix");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	}
	printf("\nThe Minimum cost spanning edges are:");
	while(ne<n)
	{
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find(u);
		v=find(v);
		if(Union(u,v))
		{
			printf("\n%d Edge(%d,%d) cost:%d",ne++,a,b,min);
			mincost+=min;
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("\nMincost : %d",mincost);
}
