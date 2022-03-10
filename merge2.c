#include<stdio.h>
#include<stdlib.h>


void main()
{
	int i,j,k,a[50],b[50],c[100],m,n,temp;
	
	printf("\nEnter no: of elements to be inserted in first array");
	scanf("%d",&m);
	printf("\nEnter %d elements",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter no: of elements to be inserted in second array");
	scanf("%d",&n);
	printf("\nEnter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<m-1;i++)
	{
		for(j=i;j<m;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	
	i=0;
	j=0;
	k=0;
	while(i<m && j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	if(i>=m)
	{
		while(j<n)
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	if(j>=n)
	{
		while(i<m)
		{
			c[k]=a[i];
			i++;
			k++;
		}
	}
	
	for(i=0;i<m;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d\t",c[i]);
	}
}
	
