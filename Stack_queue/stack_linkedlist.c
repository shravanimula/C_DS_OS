#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack *link;
};
struct stack *top=NULL;
void push(int);
int pop();
int peek();
int main()
{
	int choice,data;
	while(1)
	{
		printf("1.push\t2.pop\t3.peek\t4.exit\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the data to be pushed\n");
			       scanf("%d",&data);
			       push(data);
			       break;
			case 2:if(top==NULL)
			       {
				       printf("stack is empty\n");
			       }
			       else
			       {
				       printf("data is poped from the list:%d\n",pop());
			       }
			       break;
			case 3:if(top==NULL)
			       {
				       printf("stack is empty\n");
			       }
			       else
			       {
				       printf("data is pointed to the top of the stack:%d\n",peek());
			       }
			       break;
			case 4:exit(0);
		}
	}
}
void push(int d)
{
	struct stack *newnode=NULL;
	newnode=malloc(sizeof(struct stack));
	if(newnode==NULL)
	{
		printf("stack is empty\n");
	}
	else
	{
		newnode->data=d;
		newnode->link=NULL;
		newnode->link=top;
		top=newnode;
	}
}
int pop()
{
	int d;
	struct stack *temp=NULL;
	temp=top;
	top=top->link;
	d=temp->data;
	free(temp);
	temp=NULL;
	return d;
}
int peek()
{
	return top->data;
}
