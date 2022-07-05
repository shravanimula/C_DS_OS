#include<stdio.h>
#include<stdlib.h>
struct st{
	int roll;
	struct st *link;
};
struct st *add_first(struct st *);
void display(struct st *);
int count(struct st *);
struct st *add_position(struct st *,int);
int main()
{
	struct st *head=NULL;
	int choice,c;
	while(1)
	{
		printf("1.add_beging\t2.display\t3.count\t4.add_position\t5.exit\n");
		printf("enter ur choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_first(head);
		       		break;
			case 2:display(head);
		       		break;
			case 3:c=count(head);
		       		printf("count the nodes inlinked list:%d\n",c);	       
			       break;
			case 4:head=add_position(head,c);
			      break;
			case 5:exit(0);
		}
	}
}
struct st *add_first(struct st *ptr)
{
	struct st *newnode=NULL;
	newnode=malloc(sizeof(struct st));
	if(newnode==NULL)
	{
		printf("memory is not allocated\n");
	}
	else
	{
		printf("enter a roll:\n");
		scanf("%d",&newnode->roll);
		newnode->link=NULL;
		newnode->link=ptr;
		ptr=newnode; 
	}
	return ptr;
}
struct st *add_position(struct st *ptr,int count)
{
	struct st *newnode=NULL ,*temp=NULL;
	int position,i;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		printf("enter the postion to add the list:\n");
		scanf("%d",&position);
		if(position>count)
		{
			printf("invalid choice\n");
			
		}
	
		else
		{
			temp=ptr;
			for(i=1;i<position-1;i++)
			{
				temp=temp->link;
			}
		newnode=malloc(sizeof(struct st));
		if(newnode==NULL)
			printf("memory is not allocated\n");
		else
		{
			printf("enter a rollno:\n");
			scanf("%d",&newnode->roll);
			newnode->link=NULL;
			newnode->link=temp->link;
			temp->link=newnode;
		}
		}
	}
	return ptr;
}

void display(struct st *ptr)
{
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d\n",ptr->roll);
			ptr=ptr->link;
		}
	}
}
int count(struct st *ptr)
{
	int count=0;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(ptr)
		{
			count++;
			ptr=ptr->link;
		}
		//printf("count the nodes in linked list=%d\n",count);
	}
	return count;
}
