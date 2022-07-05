#include<stdio.h>
#include<stdlib.h>
struct st{
	int roll;
	struct st *link;
};
struct st *add_first(struct st *);
void display(struct st *);
void count(struct st *);
int main()
{
	struct st *head=NULL;
	int choice;
	while(1)
	{
		printf("1.add_beging\t2.display\t3.count\t4.exit\n");
		printf("enter ur choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_first(head);
		       		break;
			case 2:display(head);
		       		break;
			case 3:count(head);
		       		break;
			case 4:exit(0);
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
void count(struct st *ptr)
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
		printf("count the nodes in linked list=%d\n",count);
	}
}
