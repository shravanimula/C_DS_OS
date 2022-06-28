#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
void push(int);
int pop();
int peek();
int top=-1;
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
			case 2:if(top==-1)
			       {
				       printf("stack is empty\n");
			       }
			       else
			       {
				       printf("data to be poped from the stack %d\n",pop());
			       }
			       break;
			case 3:if(top==-1)
			       {
				       printf("stack is empty\n");
			       }
			       else
			       {
				       printf("data pointed by the top of the stack:%d\n",peek());
			       }
			       break;
			case 4:exit(0);
		}
	}
}
void push(int data)
{
	if(top==MAX-1)
	{
		printf("stack is full\n");
	}
	else
	{
		stack[++top]=data;
	}
}
int pop()
{
	return stack[top--];
}
int peek()
{
	return stack[top];
}
