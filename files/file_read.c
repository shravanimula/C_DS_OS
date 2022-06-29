#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("text.txt","r");
	if(fp==NULL)
	{
		printf("file is not opend successfully\n");
		exit(1);
	}
	else
	{
		printf("file open successfully\n");
		while((ch=(getc(fp)))!=EOF)
		{
			printf("%c",ch);
		}
	}
	fclose(fp);
}
