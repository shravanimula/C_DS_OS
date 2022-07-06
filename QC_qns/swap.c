//how to swap two numbers without using temp
#include<stdio.h>
void swap(int *,int *); 
void fun_swap(int *,int*);
int main()
{
	int a,b;
	printf("enter a value:\n");
	scanf("%d",&a);
	printf("enter b value:\n");
	scanf("%d",&b);
	printf("before swapping a=%d\tb=%d\n",a,b);
	swap(&a,&b);
	printf("after swaping tha values of  a=%d\tb=%d\n",a,b);
	void (*fp)(int *,int *)=fun_swap;
	fp(&a,&b);
	printf("after swapping the values of a=%d\tb=%d\n",a,b);
}
void swap(int *x,int *y)
{
	*x=(*x) ^ (*y);
	*y=(*x) ^ (*y);
	*x=(*x) ^ (*y);
}	
void fun_swap(int *x,int *y)
{
	*x=(*x) ^ (*y);
	*y= (*x) ^ (*y);
	*x=(*x) ^ (*y);
}	
