#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*root=NULL;

void push()
{
	struct node *temp;
	
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter element to be pushed:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)
		root=temp;
	else
	{
		temp->link=root;
		root=temp;
	}

}

void pop()
{
	
	struct node *temp;
	
	if(root==NULL)
		printf("Stack is underflow!!!");
	else
	{
		temp=root;
		root=temp->link;
		temp->link=NULL;
		printf("\nElement to be popped %d",temp->data);
		free(temp);
	}

}

void display()
{
	
	struct node *p=root;
	if(p==NULL)
		printf("Stack is underflow!!!");
	else
	{
		while(p->link!=NULL)
		{
			printf("%d->",p->data);
			p=p->link;
		}
		printf("%d",p->data);
	}
	
}

void main()
{
	int choice;
	while(1)
	{
		printf("\nSTACK OPERATIONS USING LINKED LIST");
		printf("\n----------------------------------");
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:exit(1);
				break;
			default:printf("Invalid Choice");
		}
	}
}
