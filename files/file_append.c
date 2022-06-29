#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char string[20];
	fp=fopen("text.txt","a");
	if(fp==NULL)
	{
		printf("file is not opend  successfully\n");
		exit(1);
	}
	else
	{
		printf("file open successfully\n");
		printf("enter the data to the file\n");
		scanf(" %[^\n]s",string);
		fprintf(fp,"%s",string);
		printf("data is add to the file\n");
	}
	fclose(fp);
}
