#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define SIZE 100
void string_reverse(char [],int,int);
void string_reverse_ptr(char [],int,int);
int i,temp;
int main()
{
	char string[SIZE];
	int n,len;
	printf("enter the size of string\n");
	scanf("%d",&n);
	printf("enter a string:\n");
	scanf(" %[^\n]s",string);
	for(i=0;string[i]!='\0';i++)
		len++;
	printf("length of string:%d\n",len);
	//string_reverse(string,n,len);
	//string_reverse_ptr(string,n,len);
	void (*fp)(char [],int ,int)=string_reverse;
	fp(string,n,len);
	void (*fp1)(char [],int,int)=string_reverse_ptr;
	fp1(string,n,len);
}
void string_reverse(char s[],int n,int len)
{
	for(i=0;i<len/2;i++)
	{
		temp=s[i];
		s[i]=s[len-i-1];
		s[len-i-1]=temp;
	}
	printf("reverse the  string=%s\n",s);
}
void string_reverse_ptr(char *s,int n,int len)
{
	for(i=0;i<len/2;i++)
	{
		temp=*(s+i);
		*(s+i)=*(s+len-i-1);
		*(s+len-i-1)=temp;
	}
	printf("reverse the  string using ptr=%s\n",s);
}
