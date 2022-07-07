#include<stdio.h>
int main()
{
	int i=0,j=0,count=0,a,b;
	printf("enter a number:\n");
	scanf("%d",&a);
	printf("enter b number:\n");
	scanf("%d",&b);
	while(j<31)
	{
		if(a & 0x1 << i ^ b & 0x1 << i)
		{
			if(b & 0x1 << i)
			{
				a=a|0x1 << i;
				count++;
			}
			else 
			{
				a=a & ~ (0x1 << i);
				count++;
			}
		}
		i++;
		j++;
	}
	printf("a=%d\tchanged bits=%d\n",a,count);
}
