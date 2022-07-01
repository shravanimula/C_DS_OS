#include<stdio.h>
#define SIZE 100
void palindrome(char [] ,int ,int);
int main()
{
	char string[SIZE];
	int n,i,length;
	printf("enter the length of string\n");
	scanf("%d",&n);
	printf("enter a string\n");
	scanf(" %[^\n]s",string);
	for(i=0;string[i]!='\0';i++)
	{
		length++;
	}
	printf("length of string=%d\n",length);
	//palindrome(string,n,length);
	void (*fp)(char [],int,int);
	fp=palindrome;
	fp(string,n,length);
}
void palindrome(char a[],int n,int len)
{
	int i,flag;
	for(i=0;i<len/2;i++)
	{
		if(a[i]==a[len-i-1])
			flag=0;
		else flag=1;
	}
	if(flag==0)
	{
		printf("given string is  palindrome=%s\n",a);
	}
	if(flag==1)
	{
		printf("given string is not palindrome=%s\n",a);
	}
}

