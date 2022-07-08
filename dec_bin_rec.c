#include<stdio.h>
int dec_binary(int num)
{ 
	if(num==0)
	     	return 0;
	else
	   	return(num%2+10*dec_binary(num/2));
}    
int main()
{
	int dec;
	printf("enter a decimal number:");
	scanf("%d",&dec);
	printf("binary number is %d\n",dec_binary(dec));
}
