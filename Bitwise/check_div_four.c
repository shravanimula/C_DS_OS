#include<stdio.h>
int main()
{
	int num,check;
	printf("enter a number:\n");
	scanf("%d",&num);
	check=num & 3;
	if(check==0)
		printf("given number is divisible  of 4:%d\n",num);
	else 
		printf("given number is not divisible  of 4:%d\n",num);
}
