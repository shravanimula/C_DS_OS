#include<stdio.h>
void swap_without_temp(int x,int y)
{
	x=x^y;
	y=x^y;
	x=x^y;
	printf("a=%d\tb=%d\n",x,y);
}
void swap_with_temp(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("a=%d\tb=%d\n",x,y);
}
int main()
{
	int a,b,temp;
	printf("enter a value\n");
	scanf("%d",&a);
	printf("enter b value\n");
	scanf("%d",&b);
	printf("a=%d\tb=%d\n",a,b);
	void (*fp[])(int,int)={swap_without_temp,swap_with_temp};
	for(int i=0;i<2;i++)
	{
		fp[i](a,b);
	}
}
