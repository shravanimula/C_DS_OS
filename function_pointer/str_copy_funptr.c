#include<stdio.h>
#define SIZE 100
void mystring_copy(char [],char []);
int main()
{
	char str1[SIZE] ,str2[SIZE];
	int n;
	printf("enter a string length:\n");
	scanf("%d",&n);
	printf("enter a string1:\n");
	scanf(" %[^\n]s",str1);
	printf("enter a string2:\n");
	scanf(" %[^\n]s",str2);
	//mystring_copy(str2,str1);
	void (*fp)(char [],char [])=mystring_copy;
	fp(str2,str1);
}
void mystring_copy(char dest[],char src[])
{
	int i=0;
	for(i=0;src[i]!='\0';i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
	printf("destination of string2=%s\n",dest);
	printf("source of string=%s\n",src);	
}
