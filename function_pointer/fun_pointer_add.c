#include<stdio.h>
int add(int ,int );
int main()
{
	int a,b,c;
	printf("enter a number\n");
	scanf("%d",&a);
	printf("enter b number\n");
	scanf("%d",&b);
	int (*fp)(int,int);//declaration of function pointer
	fp=add;//assigning the address of add function
	c=fp(a,b);//calling
	printf("sum of a and b=%d\n",c);
}
int add(int x,int y)
{
	return x+y;
}
