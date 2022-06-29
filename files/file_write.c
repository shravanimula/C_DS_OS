#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[20];
	fp=fopen("text.txt","w");
	if(fp==NULL)
	{
		printf("file is not open successfully\n");
		exit(1);
	}
	else
	{
		printf("file open successfully\n");
		printf("enter the data to the file\n");
		scanf(" %[^\n]s",str);
		for(int i=0;str[i]!='\0';i++)
		{
			putc(str[i],fp);
		}
	}
	fclose(fp);
}		
