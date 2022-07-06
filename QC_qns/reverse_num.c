//Program to reverse a number?
#include<stdio.h>
int reverse(int );
int fun_reverse(int);
void reverse_ptr(int *);
void fun_reverse_ptr(int *);
int main()
{
	int num,result,result1;
	printf("enter a number:\n");
	scanf("%d",&num);
	result=reverse(num);
	printf("reverse of number using call by value:%d\n",result);
	int (*fp)(int)=fun_reverse;
	result1=fp(num);
	printf("reverse of number using function pointer:%d\n",result1);
	printf("num=%d\n",num);
	reverse_ptr(&num);
	printf("reverse of number using ptr:%d\n",num);
	void (*fp1)(int *)=fun_reverse_ptr;
	fp1(&num);
	printf("reverse of number using fuction pointer and call by reference:%d\n",num);
}
int reverse(int n)
{
	int temp,rev=0;
	temp=n;
	while(temp > 0)
	{
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	return rev;
}
int fun_reverse(int n)
{
	int temp,rev=0;
	temp=n;
	while(temp > 0)
	{
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	return rev;
}
void reverse_ptr(int *n)
{
	int temp,rev=0;
	temp=*n;
	while(temp > 0)
	{
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	*n=rev;
}
void fun_reverse_ptr(int *n)
{
	int temp,rev=0;
	temp=*n;
	while(temp > 0)
	{
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	*n=rev;
}

