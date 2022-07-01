#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divi(int,int);
int main()
{
	int a,b,choice,result;
	printf("enter a  value\n");
	scanf("%d",&a);
	printf("enter b value\n");
	scanf("%d",&b);
	int (*fp[4])(int,int);
	fp[0]=add;
	fp[1]=sub;
	fp[2]=mul;
	fp[3]=divi;
	while(1)
	{
		
		printf("0.add\t1.sub\t2.mul\t3.div\t4.exit\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0:result=fp[0](a,b);
			       printf("sum of a and b=%d\n",result);
			       break;
			case 1:result=fp[1](a,b);
			       printf("sub of a and b=%d\n",result);
			       break;
			case 2:result=fp[2](a,b);
			       printf("mul of a and b=%d\n",result);
			       break;
			case 3:result=fp[3](a,b);
			       printf("div of a and b=%d\n",result);
			       break;
			case 4:exit(0);
		}
	}
}
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mul(int x,int y)
{
	return x*y;
}
int divi(int x,int y)
{
	return x/y;
}
