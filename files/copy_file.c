#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *sfp,*dfp;
	char ch;
	sfp=fopen("text.txt","r");
	if(sfp==NULL)
	{
		printf("file is not open successfully\n");
		exit(1);
	}
	dfp=fopen("file.txt","w");
	if(dfp==NULL)
	{
		printf("file is not open successfully\n");
		exit(1);
	}
	else
	{
		while((ch=fgetc(sfp))!=EOF)
		{
			fputc(ch,dfp);
		}
		fclose(sfp);
		fclose(dfp);
	}
}
