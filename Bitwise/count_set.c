#include<stdio.h>
int main()
{
	int num,count=0;
	printf("enter a  number:\n");
	scanf("%d",&num);
	while(num > 0)
	{
		if(num &1)
		{
			count++;
		}
	num=num>>1;	
	}
	printf("number of set bit count:%d\n",count);
}
