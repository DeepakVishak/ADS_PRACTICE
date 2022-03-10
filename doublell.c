#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
	}*root=NULL;

void insertatbegin()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	
	printf("\nEnter the element to be inserted at front");
	scanf("%d",&temp->data);
	temp->prev=NULL;
	temp->next=NULL;
	
	if(root==NULL)
		root=temp;
	else
	{
		root->prev=temp;
		temp->next=root;
		root=temp;
	}

}

void insertatend()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	
	printf("\nEnter the element to be inserted at end");
	scanf("%d",&temp->data);
	temp->prev=NULL;
	temp->next=NULL;
	
	if(root==NULL)
		root=temp;
	else
	{
		struct node *p=root;
		while(p->next!=NULL)
			p=p->next;
		
		p->next=temp;
		temp->prev=p;
	}
	
}
int count()
{
	int count=1;
	struct node *p=root;
	while(p->next!=NULL)
	{	
		count++;
		p=p->next;
	}
	return count;
}
void insertatpos()
{
	int pos;
	printf("\nEnter position to insert");
	scanf("%d",&pos);
	if(pos>count())
	{
		printf("Please enter valid position");
	}
	else if(pos==1)
	{
		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node));
	
		printf("\nEnter the element to be inserted");
		scanf("%d",&temp->data);
		temp->prev=NULL;
		temp->next=NULL;
		if(root==NULL)
			root=temp;
		else
		{
			root->prev=temp;
			temp->next=root;
			root=temp;
		}
	}
	else
	{
		int i=1;
		struct node *p=root;
		while(i!=pos-1)
		{
			p=p->next;
			i++;
		}	
		
		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node));
	
		printf("\nEnter the element to be inserted");
		scanf("%d",&temp->data);
		temp->prev=NULL;
		temp->next=NULL;
		
		temp->prev=p;
		temp->next=p->next;
		p->next=temp;
		temp->next->prev=temp;
	}
	
	
}
void deleteatbegin()
{
	if(root==NULL)
		printf("\nDoubly Linked List is empty");
	else
	{
		
		struct node *temp=root;
		printf("\nElement to be deleted %d",temp->data);
		if(temp->next==NULL)
		{
			free(temp);
			root=NULL;
		}
		else
		{
		root=root->next;
		root->prev=NULL;
		free(temp);
		}
	}
}
void deleteatend()
{
	if(root==NULL)
		printf("\nDoubly Linked List is empty");
	else
	{
		struct node *p=root;
		while(p->next!=NULL)
			p=p->next;
		printf("\nElement to be deleted %d",p->data);
		if(p==root){
			free(p);
			root=NULL;
		}
		else{
		p->prev->next=NULL;
		p->prev=NULL;
		free(p);
		}
	}
}
void deleteatpos()
{
	
	int pos;
	printf("\nEnter position to delete");
	scanf("%d",&pos);
	if(pos>count())
	{
		printf("Please enter valid position");
	}
	else if(pos==1)
	{
	if(root==NULL)
		printf("\nDoubly Linked List is empty");
	else
	{
		
		struct node *temp=root;
		printf("\nElement to be deleted %d",temp->data);
		if(temp->next==NULL)
		{
			free(temp);
			root=NULL;
		}
		else
		{
		root=root->next;
		root->prev=NULL;
		free(temp);
		}
	}
	}
	else if(pos==count())
	{
	if(root==NULL)
		printf("\nDoubly Linked List is empty");
	else
	{
		struct node *p=root;
		while(p->next!=NULL)
			p=p->next;
		printf("\nElement to be deleted %d",p->data);
		if(p==root){
			free(p);
			root=NULL;
		}
		else{
		p->prev->next=NULL;
		p->prev=NULL;
		free(p);
		}
	}
	}
	else
	{
	if(root==NULL)
		printf("\nDoubly Linked List is empty");
	else{
		int i=0;
		struct node *p=root;
		while(i!=pos-1)
		{
			p=p->next;
			i++;
		}
		printf("\nElement to be deleted %d",p->data);
		p->prev->next=p->next;
		p->next->prev=p->prev;
		p->prev=NULL;
		p->next=NULL;
		free(p);
	}
	
	
	}
}
void display()
{
	if(root==NULL)
		printf("\nDoubly Linked List is empty");
	else
	{
		struct node *p=root;
		while(p->next!=NULL){
			printf("%d->",p->data);
			p=p->next;
		}
		printf("%d",p->data);
	}
}
	

void main()
{
	int choice;
	
	while(1)
	{
		printf("\n Doubly Linked List Operations");
		printf("\n--------------------------------");
		printf("\n1.Insert at Begin");
		printf("\n2.Insert at end");
		printf("\n3.Insert at position");
		printf("\n4.Delete at begin");
		printf("\n5.Delete at end");
		printf("\n6.Delete at position");
		printf("\n7.Display");
		printf("\n8.Exit");
		printf("\nEnter your choice");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:insertatbegin();
				break;
			case 2:insertatend();
				break;
			case 3:insertatpos();
				break;
			case 4:deleteatbegin();
				break;
			case 5:deleteatend();
				break;
			case 6:deleteatpos();
				break;
			case 7:display();
				break;
			case 8:exit(1);
				break;
			default:printf("Invalid Choice");
		}
	}

}
		
	
	
	
