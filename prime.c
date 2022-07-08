#include<stdio.h>
void check_prime(int);
int main()
{
	int num;
	printf("enter a number:\n");
	scanf("%d",&num);
	check_prime(num);
}
void check_prime(int n)
{
	int i,flag;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
		else 
		{
			flag=1;
		}
	}
	if(flag==1)
		printf("given number is prime number:%d\n",n);
	else
		printf("given number is not a prime number:%d\n",n);
}


