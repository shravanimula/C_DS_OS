#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
int queue[MAX];
void enque(int);
int deque();
void display();
int front=-1;
int rear=-1;
int main()
{
	int choice,data;
	while(1)
	{
		printf("1.enque\t2.deque\t3.display\t4.exit\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the data to be enque\n");
			       scanf("%d",&data);
			       enque(data);
			       break;
			case 2:if(front==-1)
			       {
				       printf("queue is empty\n");
			       }
			       else
			       {
				       printf(" data to be deque:%d\n",deque());
			       }
			       break;
			case 3:if(front==-1)
			       {
				       printf("queue is empty\n");
			       }
			       else
			       {
				     display();
			       }
			       break;
			case 4:exit(0);
		}
	}
}
void enque(int d)
{
	if(rear==MAX-1)
	{
		printf("queue is full\n");
	}
	else
	{
		if(front==-1)
			front=0;
		queue[++rear]=d;
	}
}
int deque()
{
	int temp;
	temp=queue[front];
	if(rear==0)
		front=rear=-1;
	else
	{
		memmove(queue+front,queue+front+1,sizeof(int)*rear);
		rear--;
	}
	return temp;
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
		printf("data present in the queue:%d\n",queue[i]);
}
