#include<stdio.h>
#define SIZE 100
void palindrome(char [],int);
int main()
{
	char string[SIZE];
	int n,len,i;
	printf("enter the size of string:\n");
	scanf("%d",&n);
	printf("enter the string:\n");
	scanf(" %[^\n]s",string);
	for(i=0;string[i]!='\0';i++)
	{
		len++;
	}
	printf("length of string:%d\n",len);
	//palindrome(string,len);
	void (*fp)(char [],int)=palindrome;
	fp(string,len);
}
void palindrome(char s[],int len)
{
	int i,flag;
/*	for(i=0;s[i]!='\0';i++)
	{
		len++;
	}
	printf("length of string:%d\n",len);*/
	for(i=0;i<len/2;i++)
	{
		if(s[i]==s[len-i-1])
			flag=0;
		else
		{
			flag=1;
			break;
		}	
	}
	if(flag==0)
		printf("given string is palindrome\n");
	else 
		printf("given string is not palindrome\n");
}
